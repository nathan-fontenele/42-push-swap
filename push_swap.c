#include "push_swap.h"
#include <stdio.h>

int main(int argc, char **argv)
{
    int i;
    
    i = 1;
    while (i < argc)
    {
        if (!ft_valid_arg(argv[i]))
        {
            printf("Error\n");
            return 0;
        }
        i++;
    }
    return 0;
}

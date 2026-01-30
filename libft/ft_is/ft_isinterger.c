#include "../../push_swap.h"

int ft_isinteger(char *s)
{
    int i = 0;

    if (!s || s[0] == '\0')

    if (s[i] == '+' || s[i] == '-')
        i++;

    if (s[i] == '\0')
        return 0;

    while (s[i])
    {
        if (!ft_isdigit((unsigned char)s[i]))
            return 0;
        i++;
    }
    return 1;
}

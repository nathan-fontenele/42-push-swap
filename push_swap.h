#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

//includes
#include <unistd.h>
#include "./error/error_handling.c"

//struct
typedef struct s_stack_node
{
    int value;
    int index;
    int cost;
    int total_cost;
    struct s_stack_node *next;
    struct s_stack_node *prev;
} t_stack_node;

//prototypes
int	ft_isdigit(int c);
int ft_isinteger(char *s);
int ft_isalpha(char *str);
int ft_valid_arg(char *s);

#endif
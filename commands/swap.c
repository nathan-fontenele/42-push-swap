#include "../inc/push_swap.h"

static void swap(t_stack_node **head)
{
    if (!*head || !(*head)->prox)
        return;
    *head = (*head)->prox;
}
#include "../includes/push_swap.h"

void	free_stack(t_stack **stack)
{
	t_stack	*tmp;

	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
}

void	error_exit(t_stack **a)
{
	free_stack(a);
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}
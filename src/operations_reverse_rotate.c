#include "../includes/push_swap.h"

static void	rotate_down(t_stack **stack)
{
	t_stack	*last;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	last = last_node(*stack);
	last->prev->next = NULL;
	last->prev = NULL;
	last->next = *stack;
	(*stack)->prev = last;
	*stack = last;
}

void	rra(t_stack **a)
{
	rotate_down(a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **b)
{
	rotate_down(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b)
{
	rotate_down(a);
	rotate_down(b);
	write(1, "rrr\n", 4);
}
#include "../includes/push_swap.h"

static void	rotate_up(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first = *stack;
	last = last_node(*stack);
	*stack = first->next;
	(*stack)->prev = NULL;
	first->next = NULL;
	first->prev = last;
	last->next = first;
}

void	ra(t_stack **a)
{
	rotate_up(a);
	write(1, "ra\n", 3);
}

void	rb(t_stack **b)
{
	rotate_up(b);
	write(1, "rb\n", 3);
}

void	rr(t_stack **a, t_stack **b)
{
	rotate_up(a);
	rotate_up(b);
	write(1, "rr\n", 3);
}
#include "../includes/push_swap.h"

static void	swap_top(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first = *stack;
	second = first->next;
	first->next = second->next;
	if (second->next)
		second->next->prev = first;
	second->prev = NULL;
	second->next = first;
	first->prev = second;
	*stack = second;
}

void	sa(t_stack **a)
{
	swap_top(a);
	write(1, "sa\n", 3);
}

void	sb(t_stack **b)
{
	swap_top(b);
	write(1, "sb\n", 3);
}

void	ss(t_stack **a, t_stack **b)
{
	swap_top(a);
	swap_top(b);
	write(1, "ss\n", 3);
}
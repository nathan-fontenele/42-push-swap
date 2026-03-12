#include "../includes/push_swap.h"

static void	push_top(t_stack **dest, t_stack **src)
{
	t_stack	*node;

	if (!src || !*src)
		return ;
	node = *src;
	*src = node->next;
	if (*src)
		(*src)->prev = NULL;
	node->next = *dest;
	if (*dest)
		(*dest)->prev = node;
	node->prev = NULL;
	*dest = node;
}

void	pa(t_stack **a, t_stack **b)
{
	push_top(a, b);
	write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	push_top(b, a);
	write(1, "pb\n", 3);
}
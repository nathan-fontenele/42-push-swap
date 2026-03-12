#include "../includes/push_swap.h"

t_stack	*new_node(int value)
{
	t_stack	*node;

	node = (t_stack *)malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->value = value;
	node->index = -1;
	node->pos = 0;
	node->target_pos = 0;
	node->cost_a = 0;
	node->cost_b = 0;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}

t_stack	*last_node(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

void	add_back(t_stack **stack, t_stack *new)
{
	t_stack	*last;

	if (!new)
		return ;
	if (!*stack)
	{
		*stack = new;
		return ;
	}
	last = last_node(*stack);
	last->next = new;
	new->prev = last;
}
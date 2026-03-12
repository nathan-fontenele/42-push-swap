#include "../includes/push_swap.h"

static int	get_target_pos(t_stack *a, int b_index)
{
	t_stack	*tmp;
	int		target_index;
	int		target_pos;

	tmp = a;
	target_index = INT_MAX;
	target_pos = 0;
	while (tmp)
	{
		if (tmp->index > b_index && tmp->index < target_index)
		{
			target_index = tmp->index;
			target_pos = tmp->pos;
		}
		tmp = tmp->next;
	}
	if (target_index != INT_MAX)
		return (target_pos);
	tmp = a;
	target_index = INT_MAX;
	while (tmp)
	{
		if (tmp->index < target_index)
		{
			target_index = tmp->index;
			target_pos = tmp->pos;
		}
		tmp = tmp->next;
	}
	return (target_pos);
}

void	assign_target_positions(t_stack *a, t_stack *b)
{
	set_positions(a);
	set_positions(b);
	while (b)
	{
		b->target_pos = get_target_pos(a, b->index);
		b = b->next;
	}
}

void	calculate_costs(t_stack *a, t_stack *b)
{
	int	size_a;
	int	size_b;

	size_a = stack_size(a);
	size_b = stack_size(b);
	while (b)
	{
		if (b->pos <= size_b / 2)
			b->cost_b = b->pos;
		else
			b->cost_b = b->pos - size_b;
		if (b->target_pos <= size_a / 2)
			b->cost_a = b->target_pos;
		else
			b->cost_a = b->target_pos - size_a;
		b = b->next;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target_cost.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafasilv <rafasilv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 17:41:44 by rafasilv          #+#    #+#             */
/*   Updated: 2026/03/17 17:47:36 by rafasilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	find_next_greater_index_pos(t_stack *a, int b_index)
{
	int			min_greater;
	int			pos;
	t_stack		*tmp;

	min_greater = INT_MAX;
	pos = 0;
	tmp = a;
	while (tmp)
	{
		if (tmp->index > b_index && tmp->index < min_greater)
		{
			min_greater = tmp->index;
			pos = tmp->pos;
		}
		tmp = tmp->next;
	}
	if (min_greater != INT_MAX)
		return (pos);
	return (-1);
}

static int	find_min_index_pos(t_stack *a)
{
	int			min_index;
	int			pos;
	t_stack		*tmp;

	min_index = INT_MAX;
	pos = 0;
	tmp = a;
	while (tmp)
	{
		if (tmp->index < min_index)
		{
			min_index = tmp->index;
			pos = tmp->pos;
		}
		tmp = tmp->next;
	}
	return (pos);
}

static int	get_target_pos(t_stack *a, int b_index)
{
	int	pos;

	pos = find_next_greater_index_pos(a, b_index);
	if (pos != -1)
		return (pos);
	return (find_min_index_pos(a));
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

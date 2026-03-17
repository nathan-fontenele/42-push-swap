/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafasilv <rafasilv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 17:40:39 by rafasilv          #+#    #+#             */
/*   Updated: 2026/03/17 17:42:31 by rafasilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static t_stack	*get_cheapest(t_stack *b)
{
	t_stack	*best;
	int		best_cost;
	int		total;

	best = b;
	best_cost = INT_MAX;
	while (b)
	{
		total = abs_val(b->cost_a) + abs_val(b->cost_b);
		if (total < best_cost)
		{
			best_cost = total;
			best = b;
		}
		b = b->next;
	}
	return (best);
}

static void	rotate_both(t_stack **a, t_stack **b, int *cost_a, int *cost_b)
{
	while (*cost_a > 0 && *cost_b > 0)
	{
		rr(a, b);
		(*cost_a)--;
		(*cost_b)--;
	}
	while (*cost_a < 0 && *cost_b < 0)
	{
		rrr(a, b);
		(*cost_a)++;
		(*cost_b)++;
	}
}

static void	rotate_a_to_top(t_stack **a, int *cost_a)
{
	while (*cost_a > 0)
	{
		ra(a);
		(*cost_a)--;
	}
	while (*cost_a < 0)
	{
		rra(a);
		(*cost_a)++;
	}
}

static void	rotate_b_to_top(t_stack **b, int *cost_b)
{
	while (*cost_b > 0)
	{
		rb(b);
		(*cost_b)--;
	}
	while (*cost_b < 0)
	{
		rrb(b);
		(*cost_b)++;
	}
}

void	do_cheapest_move(t_stack **a, t_stack **b)
{
	t_stack	*best;
	int		cost_a;
	int		cost_b;

	best = get_cheapest(*b);
	cost_a = best->cost_a;
	cost_b = best->cost_b;
	rotate_both(a, b, &cost_a, &cost_b);
	rotate_a_to_top(a, &cost_a);
	rotate_b_to_top(b, &cost_b);
	pa(a, b);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_turk.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafasilv <rafasilv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 17:41:22 by rafasilv          #+#    #+#             */
/*   Updated: 2026/03/17 17:43:07 by rafasilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	push_to_b(t_stack **a, t_stack **b)
{
	int	size;
	int	pushed;
	int	i;

	size = stack_size(*a);
	pushed = 0;
	i = 0;
	while (size > 6 && i < size && pushed < size / 2)
	{
		if ((*a)->index <= size / 2)
		{
			pb(a, b);
			pushed++;
		}
		else
			ra(a);
		i++;
	}
	while (stack_size(*a) > 3)
		pb(a, b);
}

void	final_rotate(t_stack **a)
{
	int	pos;
	int	size;

	pos = get_lowest_pos(*a);
	size = stack_size(*a);
	if (pos <= size / 2)
	{
		while (pos-- > 0)
			ra(a);
	}
	else
	{
		pos = size - pos;
		while (pos-- > 0)
			rra(a);
	}
}

void	sort_turk(t_stack **a, t_stack **b)
{
	push_to_b(a, b);
	sort_three(a);
	while (*b)
	{
		assign_target_positions(*a, *b);
		calculate_costs(*a, *b);
		do_cheapest_move(a, b);
	}
	final_rotate(a);
}

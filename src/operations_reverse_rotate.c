/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_reverse_rotate.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafasilv <rafasilv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 17:40:50 by rafasilv          #+#    #+#             */
/*   Updated: 2026/03/17 17:42:39 by rafasilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	rotate_down(t_stack **stack)
{
	t_stack	*last;
	t_stack	*penult;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	last = last_node(*stack);
	penult = *stack;
	while (penult->next && penult->next != last)
		penult = penult->next;
	penult->next = NULL;
	last->next = *stack;
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

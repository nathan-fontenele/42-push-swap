#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "../libft/libft.h"

typedef struct s_stack
{
	int				value;
	int				index;
	int				pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

/* parse */
void	parse_args(int argc, char **argv, t_stack **a);
void	add_numbers(char **nums, t_stack **a, int must_free);
int		is_valid_number(char *str);
long	ft_atol_ps(const char *str);
int		has_duplicate(t_stack *a, int value);

/* error */
void	error_exit(t_stack **a);
void	free_stack(t_stack **stack);

/* stack init / utils */
t_stack	*new_node(int value);
void	add_back(t_stack **stack, t_stack *new);
t_stack	*last_node(t_stack *stack);
int		stack_size(t_stack *stack);
int		is_sorted(t_stack *stack);
int		get_lowest_pos(t_stack *stack);
int		abs_val(int n);
void	set_positions(t_stack *stack);
int		get_min_index(t_stack *stack);
int		get_max_index(t_stack *stack);
void	assign_index(t_stack *a);

/* operations */
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);

/* small sort */
void	sort_stack(t_stack **a, t_stack **b);
void	sort_two(t_stack **a);
void	sort_three(t_stack **a);
void	sort_five(t_stack **a, t_stack **b);

/* turk */
void	sort_turk(t_stack **a, t_stack **b);
void	assign_target_positions(t_stack *a, t_stack *b);
void	calculate_costs(t_stack *a, t_stack *b);
void	do_cheapest_move(t_stack **a, t_stack **b);
void	final_rotate(t_stack **a);

#endif
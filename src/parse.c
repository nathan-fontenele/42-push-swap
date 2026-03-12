#include "../includes/push_swap.h"

static void	add_value_to_stack(char *str, t_stack **a)
{
	long	value;
	t_stack	*node;

	if (!is_valid_number(str))
		error_exit(a);
	value = ft_atol_ps(str);
	if (value < INT_MIN || value > INT_MAX)
		error_exit(a);
	if (has_duplicate(*a, (int)value))
		error_exit(a);
	node = new_node((int)value);
	if (!node)
		error_exit(a);
	add_back(a, node);
}

void	add_numbers(char **nums, t_stack **a, int must_free)
{
	int	i;

	i = 0;
	while (nums[i])
	{
		add_value_to_stack(nums[i], a);
		i++;
	}
	if (must_free)
		ft_free_split(nums);
}

void	parse_args(int argc, char **argv, t_stack **a)
{
	int		i;
	char	**split;

	i = 1;
	while (i < argc)
	{
		if (!argv[i][0])
			error_exit(a);
		if (ft_strchr(argv[i], ' '))
		{
			split = ft_split(argv[i], ' ');
			if (!split || !split[0])
				error_exit(a);
			add_numbers(split, a, 1);
		}
		else
			add_value_to_stack(argv[i], a);
		i++;
	}
}
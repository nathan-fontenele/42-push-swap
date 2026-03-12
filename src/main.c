#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (argc < 2)
		return (0);
	parse_args(argc, argv, &a);
	assign_index(a);
	if (!is_sorted(a))
		sort_stack(&a, &b);
	free_stack(&a);
	return (0);
}
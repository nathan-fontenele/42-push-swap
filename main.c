/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomes-f <agomes-f@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 15:32:32 by agomes-f          #+#    #+#             */
/*   Updated: 2026/01/31 17:38:54 by agomes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	char	**numbers;

	int i, j;
	if (argc < 2)
		return (0);
	for (i = 1; i < argc; i++)
	{
		numbers = ft_split(argv[i], ' ');
		if (!numbers)
			return (1);
		j = 0;
		while (numbers[j])
		{
			ft_atoi(numbers[j]);
			j++;
		}
		j = 0;
		while (numbers[j])
		{
			free(numbers[j]);
			j++;
		}
		free(numbers);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomes-f <agomes-f@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 15:32:32 by agomes-f          #+#    #+#             */
/*   Updated: 2026/01/31 16:05:00 by agomes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int i;
	int j;
	char **new_numbers;

	i = 1;
	while (i < argc)
	{
		if (!ft_valid_arg(argv[i]))
		{
			printf("Error\n");
			return (0);
		}
		i++;
	}
	new_numbers = ft_split(argv[1], ' ');
	if (!new_numbers)
		return (1);
	j = 0;
	while (new_numbers[j])
	{
		printf("Posição [%d]: %s\n", j, new_numbers[j]);
		printf("Valor como int [%d]: %d\n", j, ft_atoi(new_numbers[j]));
		j++;
	}
	return (0);
}
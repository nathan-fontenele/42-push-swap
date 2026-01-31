/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomes-f <agomes-f@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 17:39:23 by agomes-f          #+#    #+#             */
/*   Updated: 2026/01/31 17:39:24 by agomes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_convert_and_check(const char *str, int i, int sign)
{
	long long	sum;
	int			has_digit;

	sum = 0;
	has_digit = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		sum = sum * 10 + (str[i] - '0');
		has_digit = 1;
		if ((sum > 214748364LL) || 
		(sum == 214748364LL && str[i] - '0' > (sign == 1 ? 7 : 8)))
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		i++;
	}
	if (!has_digit)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	while (str[i])
	{
		if (str[i] != ' ' && !(str[i] >= 9 && str[i] <= 13))
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		i++;
	}
	return (int)(sum * sign);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	if (!str)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	return (ft_convert_and_check(str, i, sign));
}

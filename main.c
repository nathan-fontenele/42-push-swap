/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafasilv <rafasilv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 10:59:54 by rafinha           #+#    #+#             */
/*   Updated: 2026/02/04 09:08:33 by rafasilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

#include <stdio.h>

int	ft_atoi_push(const char *str)
{
	int	i;
	int	num;
	int	sign;

	i = 0;
	num = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
    
	return (num * sign);
}



int main(int argc, char **argv) 
{
    int i;
    int j;
    int str;

    i = 1;
    j = 0;
    if (argc < 2) 
    {
        write(2, "Error\n", 6);
        return (-1);
    }

    while (argv[i][j])
    {
        j = 0;
        while (argv[i][j] != '\0')
        {
            str = ft_atoi_push(&argv[i][j]);
            j++;
        }
        i++;
    }
    printf("Teste: %d", str);
    return 0;
}
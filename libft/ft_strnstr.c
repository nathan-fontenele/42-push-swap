/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafasilv <rafasilv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 09:09:21 by rafasilv          #+#    #+#             */
/*   Updated: 2025/11/20 11:53:00 by rafasilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (*substr == '\0')
	{
		return ((char *)str);
	}
	while (str[i] != '\0' && i < nb)
	{
		j = 0;
		while (str[i + j] == substr[j] && i + j < nb && substr[j] != '\0')
		{
			if (substr[j + 1] == '\0')
			{
				return ((char *)str + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

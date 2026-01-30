/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafasilv <rafasilv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:03:19 by rafasilv          #+#    #+#             */
/*   Updated: 2025/10/28 14:03:47 by rafasilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int value, size_t size)
{
	unsigned int	i;
	unsigned char	*p;

	p = (unsigned char *)dest;
	i = 0;
	while (i < size)
	{
		p[i] = (unsigned char)value;
		i++;
	}
	return (dest);
}

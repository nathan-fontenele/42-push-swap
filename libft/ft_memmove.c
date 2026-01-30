/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafasilv <rafasilv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:02:54 by rafasilv          #+#    #+#             */
/*   Updated: 2025/11/20 11:57:00 by rafasilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t nb)
{
	unsigned int		i;
	unsigned char		*dest_str;
	const unsigned char	*src_str;

	i = 0;
	dest_str = dest;
	src_str = src;
	if (dest_str < src_str)
	{
		while (i < nb)
		{
			dest_str[i] = src_str[i];
			i++;
		}
	}
	else if (dest_str > src_str)
	{
		i = nb;
		while (i > 0)
		{
			dest_str[i - 1] = src_str[i - 1];
			i--;
		}
	}
	return (dest);
}

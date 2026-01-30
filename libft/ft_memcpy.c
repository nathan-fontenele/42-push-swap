/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafasilv <rafasilv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:04:27 by rafasilv          #+#    #+#             */
/*   Updated: 2025/11/20 11:57:12 by rafasilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t nb)
{
	unsigned int	i;
	unsigned char	*src_str;
	unsigned char	*dest_str;

	if (!dest && !src)
		return (NULL);
	i = 0;
	src_str = (unsigned char *)src;
	dest_str = (unsigned char *)dest;
	while (i < nb)
	{
		dest_str[i] = src_str[i];
		i++;
	}
	return (dest);
}

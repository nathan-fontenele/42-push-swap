/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafasilv <rafasilv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:56:15 by rafasilv          #+#    #+#             */
/*   Updated: 2025/11/20 11:59:14 by rafasilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*aloc;

	if (num != 0 && (num * size) / num != size)
		return (NULL);
	aloc = (void *)malloc(num * size);
	if (aloc == NULL)
	{
		return (NULL);
	}
	ft_bzero(aloc, num * size);
	return (aloc);
}

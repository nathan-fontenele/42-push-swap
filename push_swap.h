/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomes-f <agomes-f@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 15:32:28 by agomes-f          #+#    #+#             */
/*   Updated: 2026/01/31 16:03:49 by agomes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// includes
# include <unistd.h>
# include <stdlib.h>

// struct
typedef struct s_stack_node
{
	int					value;
	int					index;
	int					cost;
	int					total_cost;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}						t_stack_node;

// prototypes
int	ft_valid_arg(char *s);
int ft_atoi(const char *str);
char **ft_split(char const *s, char c);
char *ft_substr(const char *s, unsigned int start, size_t len);
int	ft_strlen(const char *str);

#endif
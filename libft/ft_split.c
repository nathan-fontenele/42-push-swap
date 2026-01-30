/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafasilv <rafasilv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 09:57:50 by rafinha           #+#    #+#             */
/*   Updated: 2025/11/20 12:23:07 by rafasilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
		{
			in_word = 0;
		}
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		wc;
	size_t	j;
	size_t	start;

	wc = word_count(s, c);
	result = (char **)malloc((wc + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	result[wc] = NULL;
	i = 0;
	j = 0;
	while (s && s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			start = i;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			result[j++] = ft_substr(s, start, (i + 1) - start);
		i++;
	}
	return (result);
}

/*#include <stdio.h>
int main(void)
{
    char **split;
    int i;

    split = ft_split(" Hello World This Is A Test ", ' ');
    i = 0;
    while (split[i])
    {
        printf("split[%d]: %s\n", i, split[i]);
        free(split[i]);
        i++;
    }
    free(split);
    return (0);
}*/

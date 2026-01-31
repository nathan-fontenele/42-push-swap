/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomes-f <agomes-f@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 15:19:07 by agomes-f          #+#    #+#             */
/*   Updated: 2026/01/31 15:33:08 by agomes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int ft_count_words(char const *s, char sep)
{
    int count;
    int in_word;

    count = 0;
    in_word = 0;
    while (*s)
    {
        if (*s != sep && !in_word)
        {
            in_word = 1;
            count++;
        }
        else if (*s == sep)
            in_word = 0;
        s++;
    }
    return (count);
}

static char **ft_free_all(char **words, int i)
{
    while (i > 0)
        free(words[--i]);
    free(words);
    return (NULL);
}

char **ft_split(char const *s, char c)
{
    char **words;
    int i;
    int len;

    if (!s)
        return  (NULL);
    words = malloc (sizeof(char *) * (ft_count_words(s, c) + 1));
    if (!words)
        return (NULL);
    i = 0;
    while (*s)
    {
        if (*s != c)
        {
            len = 0;
            while (s[len] && s[len] != c)
                len++;
            words[i++] = ft_substr(s, 0, len);
            if (!words[i - 1])
                return (ft_free_all(words, i - 1));
            s += len;
        }
        else
            s++;
    }
    words[i] = NULL;
    return (words);
}
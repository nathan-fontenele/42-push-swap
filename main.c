/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafinha <rafinha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 10:59:54 by rafinha           #+#    #+#             */
/*   Updated: 2026/01/30 18:12:35 by rafinha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

#include <stdio.h>

static void print_split(char **arr)
{
    int i = 0;
    if (!arr)
    {
        printf("(null)\n");
        return;
    }
    while (arr[i])
    {
        printf("[%d] \"%s\"\n", i, arr[i]);
        i++;
    }
}

int verify_args(int argc, char **argv)
{
    int i;
    int j;
    char    **matriz;

    i = 1;
    j = 0;

    while (argv[i])
    {
        j = 0;
        while (argv[i][j] != '\0')
        {
            if ((argv[i][j] < '0' || argv[i][j] > '9') && argv[i][j] != '-'
                && argv[i][j] != '+' && argv[i][j] != ' ')
            {
                write(1, "Error\n", 6);
                return (-1);
            }
            j++;
        }
        i++;
    }
    return (0);    
}

int main(int argc, char **argv) 
{
    int i;

    i = 1;
    if (argc < 2) 
    {
        return (-1);
    }
    while (i < argc)
    {
        verify_args(argc, argv);
        i++;
    }
    return 0;
}
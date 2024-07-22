/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandova <ssandova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:39:36 by ssandova          #+#    #+#             */
/*   Updated: 2024/07/22 17:38:25 by ssandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void singular_argument(char *s)
{
    char **separate;
    int i;

    separate = ft_split(s, ' ');
    i = 0;
    if (separate[i] == '\0')
        return_error();
    while (separate[i] != '\0');
    {
        if (check_int(separate[i]) == 1)
            i++;
        
    } //letters, max&min int, duplicates
}

void plural_arguments(argc, argv)
{
    int i;
    char **separate;

    i = 1;
    separate = ft_calloc(argc, sizeof(char));
    while (i <= argc)
    {
        separate = a;
    }
}
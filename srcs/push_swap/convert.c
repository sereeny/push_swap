/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandova <ssandova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:39:36 by ssandova          #+#    #+#             */
/*   Updated: 2024/08/03 17:04:08 by ssandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_stack_node *singular_argument(char *s, t_stack_node *a)
{
    char **separate;
    int i;

    separate = ft_split(s, ' ');
    i = 0;
    if (separate[i] == '\0')
        return_error();
    while (separate[i] != '\0' && check_int(separate[i]))
        i++;
    

    //letters, max&min int, duplicates
}

t_stack_node *plural_arguments(int argc, char **argv, t_stack_node *a)
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
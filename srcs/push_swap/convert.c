/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandova <ssandova@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:39:36 by ssandova          #+#    #+#             */
/*   Updated: 2024/08/12 18:04:41 by ssandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	singular_argument(char *s, t_stack_node *a, t_stack_node *b)
{
    char **separate;
    int i;

    separate = ft_split(s, ' ');
	init_stack_a(&a, separate);
	if (check_order(a) == false)
    {
        if (stack_len(a) == 2)
            sa(&a, false);
        else if (stack_len(a) == 3)
            sort_three(&a);
        else
            sorter(&a, &b);
    }
    free_stack(&a);
	return (0);
}

void    plural_arguments(int argc, char **argv, t_stack_node *a, t_stack_node *b)
{
    int i;

    i = 0;
    while (argv[i])
    {

    }
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandova <ssandova@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:39:36 by ssandova          #+#    #+#             */
/*   Updated: 2024/08/22 14:43:29 by ssandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	singular_argument(char *s, t_stack_node *a, t_stack_node *b)
{
    char **separate;
    (void)b;

    separate = split(s, ' ');
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
}

void    plural_arguments(char **separate, t_stack_node *a, t_stack_node *b)
{
    (void)b;
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
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandova <ssandova@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:39:36 by ssandova          #+#    #+#             */
/*   Updated: 2024/08/12 16:15:25 by ssandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

t_stack_node *singular_argument(char *s, t_stack_node *a)
{
    char **separate;
    int i;

    separate = ft_split(s, ' ');
	init_stack_a(&a, separate);
	
	
}

// t_stack_node *plural_arguments(int argc, char **argv, t_stack_node *a)
// {

// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandova <ssandova@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 09:15:01 by ssandova          #+#    #+#             */
/*   Updated: 2024/08/19 09:43:35 by ssandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	sorter(t_stack_node **a, t_stack_node **b)
{
	int	len;

	len = stack_len(*a);
	if (len-- > 3 && check_order(*a) == false)
		pb(a, b, false);
	if (len-- > 3 && check_order(*a) == false)
		pb(a, b, false);
	while (len-- > 3 && check_order(*a) == false)
	{
		init_nodes_a();
		move_a_b(a, b);
	}
	sort_three(a);
	while (*b)
	{
		init_nodes_b(*a, *b);
		move_b_a(a, b);
	}
	current_index(*a);
	min_top(a);
}

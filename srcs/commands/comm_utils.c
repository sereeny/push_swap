/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comm_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandova <ssandova@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 14:27:14 by ssandova          #+#    #+#             */
/*   Updated: 2024/08/28 15:22:06 by ssandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

// sorts three nodes in ascending order
void	sort_three(t_stack_node **stack)
{
	t_stack_node	*biggest;

	biggest = max_nbr(*stack);
	if (biggest == *stack)
		ra(stack, false);
	else if (biggest == (*stack)->next)
		rra(stack, false);
	if ((*stack)->nbr > (*stack)->next->nbr)
		sa(stack, false);
}

// moves the node needed to the top of the stack
void	prep_for_push(t_stack_node **stack, t_stack_node *top, char stack_name)
{
	while (*stack != top)
	{
		if (stack_name == 'a')
		{
			if (top->above_median)
				ra(stack, false);
			else
				rra(stack, false);
		}
		else if (stack_name == 'b')
		{
			if (top->above_median)
				rb(stack, false);
			else
				rrb(stack, false);
		}
	}
}

void	min_on_top(t_stack_node **a)
{
	while ((*a)->nbr != min_nbr(*a)->nbr)
	{
		if (min_nbr(*a)->above_median)
			ra(a, false);
		else
			rra(a, false);
	}
}

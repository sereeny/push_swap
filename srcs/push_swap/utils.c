/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandova <ssandova@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 13:48:04 by ssandova          #+#    #+#             */
/*   Updated: 2024/08/12 17:41:59 by ssandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

// returns the last node of the stack
t_stack_node	*find_last_node(t_stack_node *first)
{
	if (first == NULL)
		return ;
	while (first->next != NULL)
		first = first->next;
	return (first);
}

t_stack_node	*min_nbr(t_stack_node *first)
{
	t_stack_node	*smallest_nbr;
	int				n;

	n = INT_MAX;
	while (first)
	{
		if (first->nbr < n)
		{
			n = first->nbr;
			smallest_nbr = first;
		}
		first = first->next;
	}
	return (smallest_nbr);
}

t_stack_node	*max_nbr(t_stack_node *first)
{
	t_stack_node	*largest_nbr;
	int				n;

	n = INT_MIN;
	while (first)
	{
		if (first->nbr > n)
		{
			n = first->nbr;
			largest_nbr = first;
		}
		first = first->next;
	}
	return (largest_nbr);
}

int	stack_len(t_stack_node *stack)
{
	int	count;

	if (!stack)
		return (0);
	count = 0;
	while (stack)
	{
		stack = stack->next;
		count++;
	}
	return (count);
}

void	sort_three(t_stack_node **stack)
{
	t_stack_node	*biggest;

	biggest = max_nbr(*stack);
	if (biggest == *stack)
		ra(stack, false);
	else if(biggest == (*stack)->next)
		rra(stack, false);
	if ((*stack)->nbr > (*stack)->next->nbr)
		sa(stack, false);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandova <ssandova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 13:48:04 by ssandova          #+#    #+#             */
/*   Updated: 2024/08/05 14:42:41 by ssandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../inc/push_swap.h"

// returns the last node of the stack
t_stack_node	*last_node(t_stack_node *first)
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandova <ssandova@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 15:14:09 by ssandova          #+#    #+#             */
/*   Updated: 2024/08/07 16:23:07 by ssandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static void	push(t_stack_node **source, t_stack_node **dst)
{
	t_stack_node	*temp;

	if (!*source)
		return ;
	temp = *source;
	*source = (*source)->next;
	(*source)->prev = NULL;
	if (!*dst)
	{
		*dst = temp;
		(*dst)->next = NULL;
	}
	else
	{
		temp->next = *dst;
		(*dst)->prev = temp;
		*dst = temp;
	}
}

/*pa (push a): Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.*/
void	pa(t_stack_node **a, t_stack_node **b, bool print)
{
	push(b, a);
	if (print)
		ft_printf("pa\n");
}

/*pb (push b): Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty.*/
void	pb(t_stack_node **a, t_stack_node **b, bool print)
{
	push(b, a);
	if (print)
		ft_printf("pa\n");
}

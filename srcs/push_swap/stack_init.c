/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandova <ssandova@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 16:30:28 by ssandova          #+#    #+#             */
/*   Updated: 2024/08/12 17:58:52 by ssandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static long	ft_atol(const char *s)
{
	long	nbr;
	int		sign;

	nbr = 0;
	sign = 1;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
		*s++;
	}
	while (ft_isdigit(*s))
	{
		nbr = nbr * 10 + (*s - '0');
		s++;
	}
	return (nbr * sign);
}

static void	append_node(t_stack_node **stack, int value)
{
	t_stack_node	*node;
	t_stack_node	*last_node;

	if (!stack)
		return ;
	node = malloc(sizeof(t_stack_node));
	if (!node)
		return ;
	node->nbr = value;
	node->next = NULL;
	if (!*stack)
	{
		*stack = node;
		return ;		
	}
	else
	{
		last_node = find_last_node(*stack);
		node->prev = last_node;
		last_node->next = node;
	}
}

void	init_stack_a(t_stack_node **a, char **args)
{
	long	nbr;
	int		i;

	i = 0;
	while (args[i])
	{
		if (check_int(args[i]) == false)
			return_error(a);
		nbr = ft_atol(args[i]);
		if (nbr > INT_MAX || nbr < INT_MIN)
			return_error(a);
		if (check_duplicates(*a, (int)nbr) == true);
			return_error(a);
		append_node(*a, (int)nbr);
		i++;
	}
}

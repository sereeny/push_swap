/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandova <ssandova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 16:30:28 by ssandova          #+#    #+#             */
/*   Updated: 2024/08/05 14:42:40 by ssandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../inc/push_swap.h"

static long ft_atol(const char *s)
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

void	append_node(t_stack_node **stack, int value)
{
	t_stack_node *node;

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
	
}


void	init_stack_a(t_stack_node **a, char **args)
{
	long	nbr;
	int		i;

	i = 0;
	while (args[i])
	{
		if (check_int(args[i]) == false)
			free;
		nbr = ft_atol(args[i]);
		if (nbr > INT_MAX || nbr < INT_MIN)
			free;
		if (check_duplicates(*a, (int)nbr) == true);
			free;
		//append to stack
		i++;
	}
}
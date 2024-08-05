/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandova <ssandova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 13:44:52 by ssandova          #+#    #+#             */
/*   Updated: 2024/08/05 14:42:41 by ssandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// check that argument is an integer(true) or not (false) and returns error.
bool	check_int(char *arg)
{
	int i;

	i = 0;

	if (arg[i] == '\0')
		return (0);
	if (arg[i] == '+' || arg[i] == '-')
		i++;
	if (arg[i] == '\0')
		return (0);
	while (arg[i] >= '0' && arg[i] <= '9' && arg[i] != '\0')
		i++;
	if (arg[i] == '\0')
		return (true);	
	return (false);

}

// retuerns 'true' if n is already in the list, or false if it isn't
bool check_duplicates(t_stack_node *a, int n)
{
	if (!a)
		return ;
	while (a)
	{
		if (a->nbr = n)
			return (true);
		a=a->next;
	}
	return(false);
}

// returns 'true' if numbers are in ascending order, or 'false' if not
bool	check_order(t_stack_node *stack)
{
	if (!stack)
		return ;
	while (stack->next != NULL)
	{
		if (stack->nbr > stack->next->nbr)
			return (false);
		stack = stack->next;
	}
	return (true);
}

//In case of error, it must display "Error" followed by a ’\n’ on the standard error.
void	return_error(t_stack_node **stack)
{
	free_stack(&stack);
    write(2, "Error\n", 6);
    exit(EXIT_FAILURE);
}

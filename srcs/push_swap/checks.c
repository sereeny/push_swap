/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandova <ssandova@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 13:44:52 by ssandova          #+#    #+#             */
/*   Updated: 2024/08/12 18:21:23 by ssandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// check that argument is an integer(true) or not (false).
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

// returns 'true' if n is already in the list, or false if it isn't.
bool check_duplicates(t_stack_node *a, int n)
{
	if (!a)
		return (true);
	while (a)
	{
		if (a->nbr == n)
			return (true);
		a = a->next;
	}
	return(false);
}

// returns 'true' if numbers are in ascending order, or 'false' if not
bool	check_order(t_stack_node *stack)
{
	if (!stack)
		return (true);
	while (stack->next != NULL)
	{
		if (stack->nbr > stack->next->nbr)
			return (false);
		stack = stack->next;
	}
	return (true);
}

void	free_stack(t_stack_node **stack)
{
	t_stack_node	*current;
	t_stack_node	*temp;

	if (!stack)
		return ;
	current = *stack;
	while (current)
	{
		temp = current->next;
		current->nbr = 0;
		free(current);
		current = temp;
	}
	*stack = NULL;
}

//In case of error, it must display "Error" followed by a ’\n’ on the standard error.
void	return_error(t_stack_node **stack)
{
	free_stack(stack);
    write(2, "Error\n", 6);
    exit(EXIT_FAILURE);
}

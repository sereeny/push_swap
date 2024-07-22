/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandova <ssandova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 13:44:52 by ssandova          #+#    #+#             */
/*   Updated: 2024/07/22 17:38:23 by ssandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// check that argument is an integer(1) or not (0).
int	check_int(char *arg)
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
		return (1);
	return (0);
}

// check that argument is over the min and below the max(1).
int check_minmax(int number)
{
	if (number >= INT_MIN && number <= INT_MAX)
		return (1);
	return (0);
}

// check that none of the arguments are duplicate
int check_duplicates(int *numbers)
{
	int len;
	int i;
	int j;

	len = sizeof(numbers) / sizeof(numbers[0]);
	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (i < len)
		{
			if (numbers[i] == numbers[j])
				return (0);
			i++;
		}
	}
	return (1);
}

//check if numbers are ordered (1) or not (0).
int check_order(int *numbers, int len)
{
	int i;
	int j;

	i = 0;
	while (i < len - 1)
	{
		j = i + 1;
		if (numbers[i] > numbers[j])
			return (0);
		i++;
	}
	return (1);
}

//In case of error, it must display "Error" followed by a ’\n’ on the standard error.
void	return_error()
{
    write(2, "Error\n", 6);
    exit(EXIT_FAILURE);
}

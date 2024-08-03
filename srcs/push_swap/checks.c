/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandova <ssandova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 13:44:52 by ssandova          #+#    #+#             */
/*   Updated: 2024/08/03 17:04:10 by ssandova         ###   ########.fr       */
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
	return_error();	
	return (false);

}

// check that argument is over the min and below the max(1).
bool check_minmax(int number)
{
	if (number >= INT_MIN && number <= INT_MAX)
		return (true);
	return (false);
}

// check that none of the arguments are duplicate
bool check_duplicates(int *numbers)
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
				return (false);
			i++;
		}
	}
	return (true);
}

//check if numbers are ordered (1) or not (0).
bool check_order(int *numbers, int len)
{
	int i;
	int j;

	i = 0;
	while (i < len - 1)
	{
		j = i + 1;
		if (numbers[i] > numbers[j])
			return (false);
		i++;
	}
	return (true);
}

//In case of error, it must display "Error" followed by a ’\n’ on the standard error.
void	return_error()
{
    write(2, "Error\n", 6);
    exit(EXIT_FAILURE);
}

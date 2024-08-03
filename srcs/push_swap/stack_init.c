/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandova <ssandova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 16:30:28 by ssandova          #+#    #+#             */
/*   Updated: 2024/08/03 17:04:07 by ssandova         ###   ########.fr       */
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

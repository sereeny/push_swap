/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandova <ssandova@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 13:20:17 by ssandova          #+#    #+#             */
/*   Updated: 2024/08/28 16:39:10 by ssandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static void	singular_argument(char *s, t_stack_node *a, t_stack_node *b)
{
	char	**separate;

	separate = split(s, ' ');
	if (separate[2] == NULL)
	{
		free (separate);
		return ;
	}
	init_stack_a(&a, separate);
	if (check_order(a) == false)
	{
		if (stack_len(a) == 2)
			sa(&a, false);
		else if (stack_len(a) == 3)
			sort_three(&a);
		else
			sorter(&a, &b);
	}
	free_stack(&a);
}

static void	plural_arguments(char **separate, t_stack_node *a, t_stack_node *b)
{
	init_stack_a(&a, separate);
	if (check_order(a) == false)
	{
		if (stack_len(a) == 2)
			sa(&a, false);
		else if (stack_len(a) == 3)
			sort_three(&a);
		else
			sorter(&a, &b);
	}
	free_stack(&a);
}

int	main(int argc, char **argv)
{
	t_stack_node	*a;
	t_stack_node	*b;

	a = NULL;
	b = NULL;
	if ((argc == 1) || (argc == 2 && !argv[1][0]))
		return (1);
	else if (argc == 2)
		singular_argument(argv[1], a, b);
	else if (argc > 2)
		plural_arguments(argv + 1, a, b);
	return (0);
}

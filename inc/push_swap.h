/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandova <ssandova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 12:30:03 by ssandova          #+#    #+#             */
/*   Updated: 2024/08/03 14:55:19 by ssandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <limits.h>
# include <stdbool.h>
# include "../libft/inc/libft.h"
# include "../libft/inc/ft_printf.h"

// create structure for stacks

typedef struct s_stack_node
{
    int					nbr;
    int					index;
	int 				push_cost;
	bool				above_median;
	bool				cheapest;

	struct s_stack_node	*target_node;
    struct s_stack_node	*next;
    struct s_stack_node	*prev;
} t_stack_node;

t_stack_node 	*singular_argument(char *s, t_stack_node *a);
t_stack_node 	*plural_arguments(int argc, char **argv, t_stack_node *a);

// helper functions
char	**ft_split(char const *s, char c);


// handle errors
void	return_error();
bool	check_int(char *arg);
bool 	check_minmax(int number);
bool 	check_duplicates(int *numbers);
bool 	check_order(int *numbers, int len);

// stack initiation

// nodes initiation

// stack utils

// commands

// algorithms


# endif
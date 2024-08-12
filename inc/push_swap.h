/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandova <ssandova@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 12:30:03 by ssandova          #+#    #+#             */
/*   Updated: 2024/08/12 16:10:37 by ssandova         ###   ########.fr       */
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

// create structure for stacks

typedef struct s_stack_node
{
	int					nbr;
	int					index;
	int					push_cost;
	bool				above_median;
	bool				cheapest;

	struct s_stack_node	*target_node;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}	t_stack_node;

t_stack_node	*singular_argument(char *s, t_stack_node *a);
t_stack_node	*plural_arguments(int argc, char **argv, t_stack_node *a);

// helper functions
char			**ft_split(char const *s, char c);

// handle errors
void			return_error(t_stack_node **stack);
bool			check_int(char *arg);
bool			check_duplicates(t_stack_node *a, int n);
bool			check_order(t_stack_node *stack);

// stack initiation
void			init_stack_a(t_stack_node **a, char **args);

// nodes initiation

// stack utils
t_stack_node	*find_last_node(t_stack_node *first);

// commands
void			sa(t_stack_node **stack_a, bool print);
void			sb(t_stack_node	**stack_b, bool print);
void			ss(t_stack_node **stack_a, t_stack_node **stack_b, bool print);
void			pa(t_stack_node **b, t_stack_node **a, bool print);
void			pb(t_stack_node **a, t_stack_node **b, bool print);
void			ra(t_stack_node **a, bool print);
void			rb(t_stack_node **b, bool print);
void			rr(t_stack_node **a, t_stack_node **b, bool print);

// algorithms

#endif
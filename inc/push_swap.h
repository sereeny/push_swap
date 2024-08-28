/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandova <ssandova@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 12:30:03 by ssandova          #+#    #+#             */
/*   Updated: 2024/08/28 15:22:48 by ssandova         ###   ########.fr       */
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

void			singular_argument(char *s, t_stack_node *a, t_stack_node *b);
void			plural_arguments(char **argv, \
				t_stack_node *a, t_stack_node *b);

// helper functions

char			**split(char *s, char c);

// handle errors

bool			check_int(char *arg);
bool			check_duplicates(t_stack_node *a, int n);
bool			check_order(t_stack_node *stack);
void			free_stack(t_stack_node **stack);
void			return_error(t_stack_node **stack);

// stack initiation

void			sorter(t_stack_node **a, t_stack_node **b);
void			init_stack_a(t_stack_node **a, char **args);

// nodes initiation

void			init_nodes_a(t_stack_node *a, t_stack_node *b);
void			init_nodes_b(t_stack_node *a, t_stack_node *b);
void			current_index(t_stack_node *stack);
void			set_cheapest(t_stack_node *stack);
void			prep_for_push(t_stack_node **stack, t_stack_node *top, \
				char stack_name);

// stack utils

t_stack_node	*find_last_node(t_stack_node *first);
int				stack_len(t_stack_node *stack);
t_stack_node	*max_nbr(t_stack_node *first);
t_stack_node	*min_nbr(t_stack_node *first);
t_stack_node	*get_cheapest(t_stack_node *stack);
void			min_on_top(t_stack_node **a);

// commands

void			sa(t_stack_node **stack_a, bool print);
void			sb(t_stack_node	**stack_b, bool print);
void			ss(t_stack_node **stack_a, t_stack_node **stack_b, bool print);
void			pa(t_stack_node **b, t_stack_node **a, bool print);
void			pb(t_stack_node **a, t_stack_node **b, bool print);
void			ra(t_stack_node **a, bool print);
void			rb(t_stack_node **b, bool print);
void			rr(t_stack_node **a, t_stack_node **b, bool print);
void			rra(t_stack_node **a, bool print);
void			rrb(t_stack_node **b, bool print);
void			rrr(t_stack_node **a, t_stack_node **b, bool print);
void			sort_three(t_stack_node **stack);

// algorithms

#endif
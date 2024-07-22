/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandova <ssandova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 13:20:17 by ssandova          #+#    #+#             */
/*   Updated: 2024/07/22 17:38:27 by ssandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

int	main(int argc, char** argv)
{
	if (argc == 1)
		return (0);
	if (argc == 2)
		singular_argument(argv[1]);
	if (argc > 2)
		plural_arguments(argc, argv);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandova <ssandova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:50:48 by ssandova          #+#    #+#             */
/*   Updated: 2023/11/21 18:11:29 by ssandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printnbr(int n);
int	ft_printstr(char *s);
int	ft_unsigned(unsigned int n);
int	ft_printchar(int character);
int	ft_hexadecimal(unsigned long num, const char format);
int	ft_pointer(unsigned long n);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandova <ssandova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:46:49 by ssandova          #+#    #+#             */
/*   Updated: 2023/10/07 13:11:52 by ssandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The memcpy() function copies n bytes from memory area src to memory area dst. 
If dst and src overlap, behavior is undefined. Applications in which dst and 
src might overlap should use memmove(3) instead.*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if ((d == NULL) && (s == NULL))
		return (NULL);
	if (d > s)
	{
		while (len--)
		d[len] = s[len];
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

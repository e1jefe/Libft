/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsheptun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 10:49:13 by dsheptun          #+#    #+#             */
/*   Updated: 2017/10/30 10:49:14 by dsheptun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*dst;
	unsigned char	*sor;

	dst = (unsigned char *)dest;
	sor = (unsigned char *)src;
	while (n--)
	{
		*(unsigned char *)dst = *(unsigned char *)sor;
		dst++;
		if (*(unsigned char *)sor == (unsigned char)c)
			return (dst);
		sor++;
	}
	return (NULL);
}

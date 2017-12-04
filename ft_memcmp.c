/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsheptun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 10:53:27 by dsheptun          #+#    #+#             */
/*   Updated: 2017/10/30 10:53:28 by dsheptun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	c1;
	unsigned char	c2;

	while (n--)
	{
		c1 = *(unsigned char *)s1;
		c2 = *(unsigned char *)s2;
		if (c1 != c2)
			return (c1 - c2);
		s1++;
		s2++;
	}
	return (0);
}

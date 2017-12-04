/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsheptun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 10:47:58 by dsheptun          #+#    #+#             */
/*   Updated: 2017/10/30 10:48:27 by dsheptun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int			i;
	char		*des;
	const char	*sr;

	if (dest == src)
		return (dest);
	i = 0;
	des = dest;
	sr = src;
	while (i < (int)n)
	{
		des[i] = sr[i];
		i++;
	}
	return (dest);
}

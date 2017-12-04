/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsheptun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 16:27:04 by dsheptun          #+#    #+#             */
/*   Updated: 2017/10/27 16:27:07 by dsheptun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	ds;
	size_t	ss;

	ds = ft_strlen(dest);
	ss = ft_strlen(src);
	if (size)
	{
		i = 0;
		while (src[i] && (ds + i) < size - 1)
		{
			dest[ds + i] = src[i];
			i++;
		}
		dest[ds + i] = '\0';
	}
	if (ds < size)
		return (ds + ss);
	else
		return (size + ss);
}

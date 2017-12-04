/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsheptun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 09:46:13 by dsheptun          #+#    #+#             */
/*   Updated: 2017/11/06 09:46:15 by dsheptun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*map;

	i = -1;
	if (s && f)
	{
		if (!(map = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1))))
			return (NULL);
		if (f)
		{
			while (s[++i])
				map[i] = f(i, s[i]);
		}
		map[i] = '\0';
		return (map);
	}
	return (NULL);
}

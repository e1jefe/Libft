/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsheptun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 17:10:46 by dsheptun          #+#    #+#             */
/*   Updated: 2017/11/04 17:10:47 by dsheptun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(const char *s, char (*f)(char))
{
	size_t	i;
	char	*map;

	if (s && f)
	{
		i = -1;
		if (!(map = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1))))
			return (NULL);
		if (f)
		{
			while (s[++i])
				map[i] = f(s[i]);
		}
		map[i] = '\0';
		return (map);
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsheptun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 10:15:36 by dsheptun          #+#    #+#             */
/*   Updated: 2017/11/06 10:15:39 by dsheptun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	strlen;
	char	*tmp;

	if (s1 && s2)
	{
		strlen = (ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
		tmp = (char *)malloc(sizeof(*tmp) * (strlen));
		i = 0;
		if (tmp)
		{
			while (*s1)
				tmp[i++] = *s1++;
			while (*s2)
				tmp[i++] = *s2++;
			tmp[i] = '\0';
			return (tmp);
		}
	}
	return (NULL);
}

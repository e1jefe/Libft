/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsheptun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 10:15:54 by dsheptun          #+#    #+#             */
/*   Updated: 2017/11/06 10:15:57 by dsheptun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*tmp;
	size_t	i;
	size_t	j;

	i = 0;
	if (s != NULL)
	{
		j = ft_strlen(s) - 1;
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		if (i == ft_strlen(s))
		{
			tmp = ft_strnew(0);
			if (tmp != NULL)
				return (tmp);
		}
		while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
			j--;
		tmp = ft_strsub(s, i, j - i + 1);
		if (tmp == NULL)
			return (NULL);
		return (tmp);
	}
	return (NULL);
}

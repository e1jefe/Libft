/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsheptun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 10:15:07 by dsheptun          #+#    #+#             */
/*   Updated: 2017/11/06 10:15:14 by dsheptun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*ret;

	if (!s)
		return (0);
	ret = ft_memalloc(len + 1);
	if (ret != NULL)
		ret = ft_strncpy(ret, (s + start), len);
	return (ret);
}

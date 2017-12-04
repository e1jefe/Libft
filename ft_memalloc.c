/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsheptun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 10:38:44 by dsheptun          #+#    #+#             */
/*   Updated: 2017/11/02 10:38:46 by dsheptun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ptr;

	ptr = NULL;
	if (size == 0)
		return (ptr);
	ptr = malloc(size);
	if (ptr != 0)
		ft_bzero(ptr, size);
	return (ptr);
}

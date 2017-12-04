/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsheptun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 10:53:00 by dsheptun          #+#    #+#             */
/*   Updated: 2017/10/30 10:53:02 by dsheptun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap(int *a, int *b)
{
	int tmp;

	if (a != NULL && b != NULL)
	{
		tmp = *a;
		*a = *b;
		*b = tmp;
	}
}

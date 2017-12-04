/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsheptun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 10:02:48 by dsheptun          #+#    #+#             */
/*   Updated: 2017/10/30 10:02:49 by dsheptun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int			ft_atoi(const char *str)
{
	unsigned long int	res;
	int					i;
	int					sign;

	sign = 1;
	i = 0;
	res = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		if (sign == -1 && res > 9223372036854775807)
			return (0);
		else if (sign == 1 && res > 9223372036854775806)
			return (-1);
		i++;
	}
	return (res * sign);
}

int main()
{
	char str[] = "    				-9223372036854775809111";
	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
}
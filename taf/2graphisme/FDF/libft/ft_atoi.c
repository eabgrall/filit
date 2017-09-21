/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabgrall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 18:14:30 by eabgrall          #+#    #+#             */
/*   Updated: 2016/11/29 21:53:36 by eabgrall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		x;
	int		s;
	int		res;

	s = 1;
	x = 0;
	res = 0;
	while (str[x] == ' ' || str[x] == '\n' || str[x] == '\f' ||
			str[x] == '\v' || str[x] == '\t' || str[x] == '\r')
		x++;
	if (str[x] == '-' || str[x] == '+')
	{
		if (str[x] == '-')
			s = -1;
		++x;
	}
	while (str[x] != '\0')
	{
		if (47 < str[x] && str[x] < 58)
			res = res * 10 + (str[x] - '0');
		else
			return (res * s);
		x++;
	}
	return (res * s);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabgrall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 07:31:19 by eabgrall          #+#    #+#             */
/*   Updated: 2016/11/30 21:21:40 by eabgrall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int		len;

	if (n < 0)
		len = 2;
	else
		len = 1;
	while (n >= 10 || n <= -10)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	int		len;
	char	*str;
	int		s;

	s = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_intlen(n);
	if (n < 0)
	{
		s = 1;
		n = -1 * n;
	}
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	str[len] = '\0';
	while (--len >= 0)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
	}
	if (s == 1)
		str[0] = '-';
	return (str);
}

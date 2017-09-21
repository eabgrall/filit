/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabgrall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 01:48:37 by eabgrall          #+#    #+#             */
/*   Updated: 2016/11/28 15:21:45 by eabgrall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		len;
	char	*res;

	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	if (!(res = (char *)malloc(sizeof(char) * len + 1)))
		return (0);
	i = 0;
	while (s[i])
	{
		res[i] = f(s[i]);
		i++;
	}
	res[i] = 0;
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabgrall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 12:49:04 by eabgrall          #+#    #+#             */
/*   Updated: 2016/11/30 21:21:24 by eabgrall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count(char const *s, char c)
{
	int		res;
	int		i;

	res = 0;
	i = 1;
	if (s[0] == 0)
		return (0);
	if (s[0] != c)
		res++;
	while (s[i])
	{
		if (s[i] != c && s[i - 1] == c)
			res++;
		i++;
	}
	return (res);
}

static size_t	ft_wordlen(char const *s, char c, size_t i)
{
	size_t	res;

	res = 0;
	while (s[i] != c)
	{
		res++;
		i++;
	}
	return (res);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		nb;
	size_t	i;
	int		x;

	if (!s)
		return (0);
	nb = ft_count(s, c);
	if (!(res = (char **)malloc(sizeof(char*) * (nb + 1))))
		return (0);
	x = 0;
	i = 0;
	while (x < nb)
	{
		if (s[i] != c)
		{
			if (!(res[x] = ft_strsub(s, i, ft_wordlen(s, c, i))))
				return (0);
			i = i + ft_wordlen(s, c, i);
			x++;
		}
		i++;
	}
	res[x] = 0;
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabgrall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 11:14:46 by eabgrall          #+#    #+#             */
/*   Updated: 2016/11/28 12:45:14 by eabgrall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t		i;
	size_t		f;
	size_t		d;
	char		*res;

	i = 0;
	d = 0;
	if (!s)
		return (0);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	f = ft_strlen(s) - 1;
	while ((s[f] == ' ' || s[f] == '\n' || s[f] == '\t') && (f > i))
		f--;
	return (res = ft_strsub(s, i, (f - i + 1)));
}

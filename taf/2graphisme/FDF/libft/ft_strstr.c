/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabgrall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 01:56:38 by eabgrall          #+#    #+#             */
/*   Updated: 2016/11/29 22:14:37 by eabgrall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int		i;
	int		c;
	size_t	s;

	i = -1;
	s = 0;
	if (little[0] == 0)
		return ((char *)big);
	while (big[++i])
		if (little[s] == big[i])
		{
			c = i;
			while (little[s] == big[i])
			{
				s++;
				i++;
				if (s == ft_strlen(little))
					return ((char *)big + c);
			}
			s = 0;
			i = c + 1;
		}
	return (0);
}

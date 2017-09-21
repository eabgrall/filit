/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabgrall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 18:48:38 by eabgrall          #+#    #+#             */
/*   Updated: 2016/11/30 21:07:26 by eabgrall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t			len;
	unsigned char	*big2;

	big2 = (unsigned char *)big;
	if (*little == 0)
		return ((char *)big);
	len = ft_strlen(little);
	while (*big2 && len <= n--)
	{
		if (ft_memcmp(little, big2, len) == 0)
			return ((char *)big2);
		big2++;
	}
	return (0);
}

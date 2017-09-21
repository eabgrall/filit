/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabgrall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 00:57:27 by eabgrall          #+#    #+#             */
/*   Updated: 2016/11/22 03:06:52 by eabgrall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t					i;
	unsigned const char		*a;
	unsigned char			*b;

	b = (unsigned char *)dst;
	a = (unsigned char *)src;
	i = 0;
	if (dst < src)
		while (i < len)
		{
			b[i] = a[i];
			i++;
		}
	else if (src < dst)
		while (len > 0)
		{
			b[len - 1] = a[len - 1];
			len--;
		}
	return (dst);
}

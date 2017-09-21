/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabgrall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 23:57:48 by eabgrall          #+#    #+#             */
/*   Updated: 2016/11/29 21:55:41 by eabgrall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*a;
	unsigned char	*b;

	b = (unsigned char *)dst;
	a = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		b[i] = a[i];
		i++;
	}
	return (dst);
}

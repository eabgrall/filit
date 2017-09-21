/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabgrall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 22:39:14 by eabgrall          #+#    #+#             */
/*   Updated: 2016/11/26 22:51:57 by eabgrall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*buff;

	if (!(buff = (void *)malloc(size)))
		return (0);
	ft_bzero(buff, size);
	return (buff);
}

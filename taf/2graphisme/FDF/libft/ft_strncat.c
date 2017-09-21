/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabgrall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 19:33:07 by eabgrall          #+#    #+#             */
/*   Updated: 2016/11/29 23:19:50 by eabgrall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	lens1;

	i = 0;
	lens1 = ft_strlen(s1);
	while ((i < n) && (i < ft_strlen(s2)))
	{
		s1[lens1] = s2[i];
		i++;
		lens1++;
	}
	s1[lens1] = 0;
	return (s1);
}

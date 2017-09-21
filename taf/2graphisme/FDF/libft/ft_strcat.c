/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabgrall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 03:46:17 by eabgrall          #+#    #+#             */
/*   Updated: 2016/11/29 22:16:03 by eabgrall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t		i;
	size_t		lens1;

	i = 0;
	lens1 = ft_strlen(s1);
	while (i < ft_strlen(s2))
	{
		s1[lens1] = s2[i];
		i++;
		lens1++;
	}
	s1[lens1] = 0;
	return (s1);
}

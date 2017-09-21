/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabgrall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 22:36:17 by eabgrall          #+#    #+#             */
/*   Updated: 2016/11/30 21:22:47 by eabgrall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_bis;
	unsigned char	*s2_bis;

	i = 0;
	s1_bis = (unsigned char *)s1;
	s2_bis = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while ((s1_bis[i] == s2_bis[i]) && (s1_bis[i] || s2_bis[i]) &&
			(i < (n - 1)))
		i++;
	return (s1_bis[i] - s2_bis[i]);
}

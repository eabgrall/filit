/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabgrall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 18:57:18 by eabgrall          #+#    #+#             */
/*   Updated: 2016/11/30 20:02:05 by eabgrall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	unsigned char	*s1_bis;
	unsigned char	*s2_bis;

	i = 0;
	s1_bis = (unsigned char *)s1;
	s2_bis = (unsigned char *)s2;
	while (s1_bis[i] == s2_bis[i] && (s1_bis[i] || s2_bis[i]))
		i++;
	return (s1_bis[i] - s2_bis[i]);
}

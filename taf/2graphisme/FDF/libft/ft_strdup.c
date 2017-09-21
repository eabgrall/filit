/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabgrall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 17:51:18 by eabgrall          #+#    #+#             */
/*   Updated: 2016/11/28 15:33:23 by eabgrall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*toto;
	int		x;
	int		i;

	x = ft_strlen(s1);
	if (!(toto = (char *)malloc(sizeof(char) * (x + 1))))
		return (NULL);
	i = 0;
	while (s1[i])
	{
		toto[i] = s1[i];
		i++;
	}
	toto[i] = 0;
	return (toto);
}

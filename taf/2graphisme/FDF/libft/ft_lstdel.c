/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabgrall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 06:30:57 by eabgrall          #+#    #+#             */
/*   Updated: 2016/12/05 06:40:12 by eabgrall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*temp;

	while (*alst)
	{
		del((*alst)->content, (*alst)->content_size);
		temp = (*alst)->next;
		free(*alst);
		*alst = temp;
	}
}

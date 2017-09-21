/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabgrall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 07:27:34 by eabgrall          #+#    #+#             */
/*   Updated: 2016/12/05 07:56:24 by eabgrall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*res;
	t_list	*tmp;

	res = f(lst);
	tmp = res;
	while (lst->next)
	{
		lst = lst->next;
		res->next = f(lst);
		res = res->next;
	}
	return (tmp);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabgrall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 21:35:07 by eabgrall          #+#    #+#             */
/*   Updated: 2016/12/05 05:24:09 by eabgrall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (!lst)
		return (NULL);
	if (!content && !(lst->content = 0))
		lst->content = NULL;
	else
	{
		lst->content = malloc(content_size);
		lst->content_size = content_size;
		ft_memcpy(lst->content, content, content_size);
	}
	lst->next = NULL;
	return (lst);
}

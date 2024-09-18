/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onosul <onosul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:49:30 by onosul            #+#    #+#             */
/*   Updated: 2024/09/18 16:46:14 by onosul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newelement;
	t_list	*temp;

	if (!f)
	{
		return (NULL);
	}
	temp = NULL;
	while (lst)
	{
		newelement = ft_lstnew(f(lst->content));
		if (!newelement)
		{
			ft_lstclear(&temp, del);
			return (NULL);
		}
		ft_lstadd_back(&temp, newelement);
		lst = lst->next;
	}
	return (temp);
}

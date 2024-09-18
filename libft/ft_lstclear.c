/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onosul <onosul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:27:13 by onosul            #+#    #+#             */
/*   Updated: 2024/09/18 14:27:16 by onosul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*tobedeleted;

	temp = *lst;
	while (temp)
	{
		tobedeleted = temp->next;
		del(temp->content);
		free(temp);
		temp = tobedeleted;
	}
	*lst = NULL;
}

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

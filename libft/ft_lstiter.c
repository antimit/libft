#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
	{
		return ;
	}
	t_list *temp = lst;
	while (temp)
	{
		f(temp->content);
		temp = temp->next;
	}
}
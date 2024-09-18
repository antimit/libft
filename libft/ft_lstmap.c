#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	if ( !f )
	{
		return (NULL);
	}
	t_list *newElement;
	t_list *temp;
	temp = NULL;
	while (lst)
	{
		newElement = ft_lstnew(f(lst->content));
		if (!newElement)
		{
			ft_lstclear(&temp, del);
			return (NULL);
		}
		ft_lstadd_back(&temp, newElement);
		lst = lst->next;
	}
	return (temp);
}
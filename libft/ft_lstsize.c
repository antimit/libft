#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*temp;
	int		result;

	temp = lst;
	result = 0;
	while (temp)
	{
		result++;
		temp = temp->next;
	}
	return (result);
}

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c >= 'a' && c <= 'z');
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (c >= 'A' && c <= 'Z');
	}
	else
	{
		return (0);
	}
}

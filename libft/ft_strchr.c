#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*p = s;

	while (*p)
	{
		if (*p == (char)c)
		{
			return ((char *)p);
		}
		p++;
	}
	// check for '\0'
	if (*p == (char)c)
	{
		return ((char *)p);
	}
	else
	{
		return (NULL);
	}
}

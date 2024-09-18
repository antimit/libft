#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*p = s;
	char		*result;

	result = NULL;
	while (*p)
	{
		if (*p == (char)c)
		{
			result = (char *)p;
		}
		p++;
	}
	if ((char)c == '\0')
	{
		return ((char *)p);
	}
	return (result);
}

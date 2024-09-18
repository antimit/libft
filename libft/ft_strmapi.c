#include "libft.h"


char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	char	*result;
	int		i;

	if (!s)
	{
		return (NULL);
	}
	len = (int)ft_strlen(s);
	result = (char *)malloc(len + 1);
	if (!result)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	full_length;
	size_t	actual_len;
	char	*p;
	size_t	i;

	if (start >= strlen(s))
		return (ft_strdup(""));
	full_length = strlen(s) - start;
	if (full_length > len)
		actual_len = len;
	else
		actual_len = full_length;
	p = (char *)malloc(actual_len);
	if (!p)
	{
		return (NULL);
	}
	i = 0;
	while (i < actual_len)
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

// int main()
// {
//     char *sub = ft_substr("Hello, World!", 7, 5);
//     printf("%s",sub);
// }

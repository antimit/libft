#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && *s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		i++;
	}
	if (i < n)
	{
		return (*s1 - *s2);
	}
	return (0);
}

// int main()
// {
//     const char *s1 = "Hello";
//     const char *s2 = "Her";
//     int result = ft_strncmp(s1,s2,3);
//     printf("%d",result);
//     return (0);

// }
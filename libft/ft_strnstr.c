#include "libft.h"

// char	*ft_strnstr(const char *big, const char *little, size_t len)
// {
// 	size_t	i;
// 	char	*big1;
// 	char	*little1;
// 	size_t	little_len;

// 	big1 = (char *)big;
// 	little1 = (char *)little;
// 	little_len = strlen(little1);
// 	if (!(*little1))
// 		return (big1);
// 	while (little_len <= len)
// 	{
// 		i = 0;
// 		while (i < little_len)
// 		{
// 			if (little1[i] != big1[i])
// 				break ;
// 			i++;
// 		}
// 		if (i == little_len)
// 			return (big1);
// 		big1++;
// 		len--;
// 	}
// 	return (NULL);
// }

// int main()
// {
//     const char big[] = "Hello World";
//     const char little[] = "World";
//     size_t len = 11;  // Length to search within

//     char *result = ft_strnstr(big, little, len);
//     if (result)
//     {
//         printf("Found '%s' in '%s'\n", little, result);
//     }
//     else
//     {
//         printf("'%s' not found in the first %zu characters of '%s'\n",
// little, len, big);
//     }

//     return (0);
// }

char
	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!haystack || !needle)
		return (NULL);
	if (!needle || !needle[0])
		return ((char*)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] && needle[j] &&
				i + j < len && haystack[i + j] == needle[j])
			j++;
		if (!needle[j])
			return ((char*)(haystack + i));
		i++;
	}
	return (NULL);
}
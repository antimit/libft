#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	src_len = 0;
	while (dst[dst_len])
		dst_len++;
	while (src[src_len])
		src_len++;
	if (size <= dst_len)
		return (size_t)(dst_len + src_len);
	i = 0;
	while (i + dst_len < size - 1 && src[i])
	{
		dst[i + dst_len] = src[i];
		i++;
	}
	dst[i + dst_len] = '\0';
	return (size_t)(dst_len + src_len);
}

// int	main(void)
// {
// 	char dest[20] = "Hello, ";
// 	const char *src = "world!";

// 	size_t result = strlcat(dest, src, sizeof(dest));
// 	printf("Concatenated string: %s\n", dest);
// 	printf("Total length: %zu\n", result);

// 	return (0);
// }



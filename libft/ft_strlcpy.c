#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = 0;
	while (src[src_len])
	{
		src_len++;
	}
	if (size == 0)
	{
		return (src_len);
	}
	i = 0;
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

// int main()
// {
//     char dst [10];
//     size_t size = 3;
//     const char * src = "Hello World";
//     size_t result = ft_strlcpy(dst,src,size);

//     printf("%ld\n",result);
//     printf("%s",dst);

// }
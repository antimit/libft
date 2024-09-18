#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	i = 0;
	unsigned char *dest1 = (unsigned char *)dest;
	unsigned char *src1 = (unsigned char *)src;

	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest);
}
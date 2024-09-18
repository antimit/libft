#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char temp[n];
	unsigned char *p = (unsigned char *)src;
	unsigned char *d = (unsigned char *)dest;
	if (d == p)
	{
		return (dest);
	}
	size_t i;
	i = 0;
	while (i < n)
	{
		temp[i] = p[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		d[i] = temp[i];
		i++;
	}
	return (dest);
}
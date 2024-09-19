/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onosul <onosul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:33:34 by onosul            #+#    #+#             */
/*   Updated: 2024/09/18 17:56:33 by onosul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*p;
	unsigned char	*d;
	size_t			i;

	p = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (d == p || n == 0)
		return (dest);
	if (d > p)
	{
		while (n--)
			d[n] = p[n];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = p[i];
			i++;
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	int	n;
// 	int	src[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
// 	int	i;

// 	n = 10;
// 	memmove(src + 2, src, 4 * sizeof(int));
// 	i = 0;
// 	while (i < n)
// 	{
// 		printf("%d\n", src[i]);
// 		i++;
// 	}
// }

// void	*ft_memmove(void *dest, const void *src, size_t n)
// {
// 	unsigned char	*p;
// 	unsigned char	*d;
// 	size_t			i;

// 	p = (unsigned char *)src;
// 	d = (unsigned char *)dest;
// 	if (d == p)
// 	{
// 		return (dest);
// 	}
// 	i = 0;
// 	while (i < n)
// 	{
// 		d[i] = p[i];
// 		i++;
// 	}
// 	return (dest);
// }

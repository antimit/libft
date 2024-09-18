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
	if (d == p)
	{
		return (dest);
	}
	i = 0;
	while (i < n)
	{
		d[i] = p[i];
		i++;
	}
	return (dest);
}

// void	ft_memmove_copy(unsigned char *dest, const unsigned char *src, size_t n)
// {
// 	size_t	i;

// 	i = 0;
// 	while (i < n)
// 	{
// 		dest[i] = src[i];
// 		i++;
// 	}
// }

// void	*ft_memmove(void *dest, const void *src, size_t n)
// {
// 	unsigned char	*temp;
// 	unsigned char	*p;
// 	unsigned char	*d;

// 	if (!dest && !src)
// 	{
// 		return (NULL);
// 	}
// 	temp = (unsigned char *)malloc(n);
// 	p = (unsigned char *)src;
// 	d = (unsigned char *)dest;
// 	if (d == p || n == 0)
// 		return (dest);
// 	ft_memmove_copy(temp, p, n);
// 	ft_memmove_copy(d, temp, n);
// 	free(temp);
// 	return (dest);
// }

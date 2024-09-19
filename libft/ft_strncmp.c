/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onosul <onosul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:42:58 by onosul            #+#    #+#             */
/*   Updated: 2024/09/18 14:43:00 by onosul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && *s1 && *s2)
	{
		if ((unsigned char)*s1 != (unsigned char)*s2)
		{
			return ((unsigned char)*s1 - ((unsigned char)*s2));
		}
		s1++;
		s2++;
		i++;
	}
	if (i < n)
	{
		return ((unsigned char)*s1 - ((unsigned char)*s2));
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
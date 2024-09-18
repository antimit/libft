/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onosul <onosul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:47:25 by onosul            #+#    #+#             */
/*   Updated: 2024/09/18 15:25:43 by onosul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	little_len = ft_strlen(little);
	if (!(*little))
		return ((char *)big);
	while (*big && len >= little_len)
	{
		i = 0;
		while (i < little_len)
		{
			if (little[i] != big[i])
				break ;
			i++;
		}
		if (i == little_len)
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}

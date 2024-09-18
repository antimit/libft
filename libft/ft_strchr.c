/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onosul <onosul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:35:18 by onosul            #+#    #+#             */
/*   Updated: 2024/09/18 15:43:09 by onosul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*p = s;

	while (*p)
	{
		if (*p == (char)c)
		{
			return ((char *)p);
		}
		p++;
	}
	if (*p == (char)c)
	{
		return ((char *)p);
	}
	else
	{
		return (NULL);
	}
}

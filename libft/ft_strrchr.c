/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onosul <onosul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:55:09 by onosul            #+#    #+#             */
/*   Updated: 2024/09/18 15:44:09 by onosul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*p = s;
	char		*result;

	result = NULL;
	while (*p)
	{
		if (*p == (char)c)
		{
			result = (char *)p;
		}
		p++;
	}
	if ((char)c == '\0')
	{
		return ((char *)p);
	}
	return (result);
}

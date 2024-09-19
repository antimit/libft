/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onosul <onosul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:26:38 by onosul            #+#    #+#             */
/*   Updated: 2024/09/18 18:23:15 by onosul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*allocate_and_copy(const char *s, unsigned int start,
		size_t actual_len)
{
	char	*p;
	size_t	i;

	p = (char *)malloc(actual_len + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (i < actual_len)
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	full_length;
	size_t	actual_len;

	if (!s)
		return (NULL);
	full_length = ft_strlen(s);
	if (start >= full_length)
		return (ft_strdup(""));
	full_length -= start;
	if (full_length > len)
		actual_len = len;
	else
		actual_len = full_length;
	return (allocate_and_copy(s, start, actual_len));
}

// int main()
// {
//     char *sub = ft_substr("Hello, World!", 7, 5);
//     printf("%s",sub);
// }

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	size_t	full_length;
// 	size_t	actual_len;
// 	char	*p;
// 	size_t	i;

// 	if (start >= ft_strlen(s))
// 		return (ft_strdup(""));
// 	full_length = ft_strlen(s) - start;
// 	if (full_length > len)
// 		actual_len = len;
// 	else
// 		actual_len = full_length;
// 	p = (char *)malloc(actual_len +1);
// 	if (!p)
// 	{
// 		return (NULL);
// 	}
// 	i = 0;
// 	while (i < actual_len)
// 	{
// 		p[i] = s[start + i];
// 		i++;
// 	}
// 	p[i] = '\0';
// 	return (p);
// }
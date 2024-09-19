/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onosul <onosul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:25:55 by onosul            #+#    #+#             */
/*   Updated: 2024/09/18 15:32:30 by onosul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strncpy(char *dest, char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

int	isinset(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*p;

	if (!s1 || !set)
	{
		return (NULL);
	}
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && isinset(set, s1[start]))
		start++;
	while (end > start && isinset(set, s1[end - 1]))
	{
		end--;
	}
	len = end - start;
	p = (char *)malloc(len + 1);
	if (!p)
	{
		return (NULL);
	}
	ft_strncpy(p, ((char *)s1) + start, len);
	return (p);
}

// int	main(void)
// {
// 	char const *s1 = "  Hello World  ";
// 	char const *set = " ";
// 	char *trimmed = ft_strtrim(s1, set);

// 	if (trimmed)
// 	{
// 		printf("Trimmed string: '%s'\n", trimmed);
// 		free(trimmed); // Don't forget to free the allocated memory
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed\n");
// 	}

// 	return (0);
// }
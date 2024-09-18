/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onosul <onosul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:35:10 by onosul            #+#    #+#             */
/*   Updated: 2024/09/18 16:13:48 by onosul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_space(char c, char sep)
{
	return (c == sep);
}

size_t	word_len(const char *str, char sep)
{
	size_t	i;

	i = 0;
	while (!is_space(str[i], sep) && str[i])
	{
		i++;
	}
	return (i);
}

size_t	count_words(const char *str, char sep)
{
	int		i;
	size_t	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (is_space(str[i], sep) && str[i])
		{
			i++;
		}
		if (!is_space(str[i], sep) && str[i])
		{
			count++;
		}
		while (!is_space(str[i], sep) && str[i])
		{
			i++;
		}
	}
	return (count);
}

char	*ft_word(const char *str, char sep)
{
	int		i;
	int		len;
	char	*result;

	i = 0;
	len = 0;
	len = word_len(str, sep);
	result = (char *)malloc(len + 1);
	if (!result)
	{
		return (NULL);
	}
	while (i < len)
	{
		result[i] = str[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	**ft_split(const char *s, char c)
{
	const char	*str;
	size_t		len;
	char		**result;
	size_t		i;

	if (!s)
		return (NULL);
	str = s;
	len = count_words(str, c);
	result = (char **)malloc((len + 1) * sizeof(char *));
	i = 0;
	while (*str)
	{
		while (is_space(*str, c) && *str)
			str++;
		if (*str && !is_space(*str, c))
		{
			result[i] = ft_word(str, c);
			i++;
		}
		while (!is_space(*str, c) && *str)
			str++;
	}
	result[i] = NULL;
	return (result);
}

// int	main(void)
// {
// 	char	**result;
// 	char	sep;
// 	char	*str;
// 	int		i;

// 	sep = ',';
// 	str = "Hello,World HI";
// 	result = ft_split(str, sep);
// 	i = 0;
// 	while (i < count_words(str, sep))
// 	{
// 		printf("%s", result[i]);
// 		i++;
// 	}
// 	// printf("%s",result[0]);
// 	return (0);
// }

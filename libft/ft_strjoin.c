/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onosul <onosul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:35:51 by onosul            #+#    #+#             */
/*   Updated: 2024/09/18 14:36:04 by onosul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*p;
	size_t	i;

	size = strlen(s1) + strlen(s2);
	p = (char *)malloc(size + 1);
	if (!p)
	{
		return (NULL);
	}
	i = 0;
	while (i < strlen(s1))
	{
		p[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < strlen(s2))
	{
		p[strlen(s1) + i] = s2[i];
		i++;
	}
	p[strlen(s1) + i] = '\0';
	return (p);
}

// int main()
// {
//     char const *s1 = "Hello";
//     char const *s2 = " World";
//     char * result;
//     result = ft_strjoin(s1,s2);
//     printf("%s",result);
// }
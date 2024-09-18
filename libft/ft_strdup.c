/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onosul <onosul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:35:32 by onosul            #+#    #+#             */
/*   Updated: 2024/09/18 14:35:35 by onosul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	size_t	i;

	p = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!p)
	{
		return (NULL);
	}
	i = 0;
	while (i < ft_strlen((char *)s))
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

// int main()
// {
//     const char * s = "Hello";
//     char * result = ft_strdup(s);
//     for (size_t i = 0; i < strlen(result); i++)
//     {
//         printf("%c",result[i]);

//     }
//     return (0);

// }
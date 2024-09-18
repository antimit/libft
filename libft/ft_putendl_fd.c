/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onosul <onosul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:34:50 by onosul            #+#    #+#             */
/*   Updated: 2024/09/18 15:29:49 by onosul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	len;

	len = (int)ft_strlen(s);
	write(fd, s, len);
	write(fd, "\n", 1);
}

// int main()
// {
//     char * fileName = "sample.txt";
//     int fd = open(fileName,O_RDWR);

//     char * s = "Hello, World";
//     ft_putendl_fd(s,fd);
//     return (0);
// }
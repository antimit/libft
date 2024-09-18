/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onosul <onosul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:35:04 by onosul            #+#    #+#             */
/*   Updated: 2024/09/18 15:29:56 by onosul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	len;

	len = (int)ft_strlen(s);
	write(fd, s, len);
}

// int main()
// {
//     char * fileName = "sample.txt";s
//     int fd = open(fileName,O_RDWR);

//     char * s = "Hello, World";
//     ft_putstr_fd(s,fd);
//     return (0);
// }
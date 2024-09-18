/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onosul <onosul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:34:42 by onosul            #+#    #+#             */
/*   Updated: 2024/09/18 14:34:44 by onosul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	const char	d = (const char)c;

	if (fd < 0)
		return ;
	write(fd, &d, 1);
}

// int main()
// {
//     char * fileName ="sample.txt";
//     int fd = open(fileName, O_RDWR);
//     ft_putchar_fd('h',fd);
//     return (0);
// }
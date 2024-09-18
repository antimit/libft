/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onosul <onosul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:34:56 by onosul            #+#    #+#             */
/*   Updated: 2024/09/18 15:29:55 by onosul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*s;

	s = ft_itoa(n);
	write(fd, s, (int)ft_strlen(s));
}

// int main()
// {
//     char * fileName = "sample.txt";
//     int fd = open(fileName,O_RDWR);
//     ft_putnbr_fd(100,fd);
//     return (0);
// }
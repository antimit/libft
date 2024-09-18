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

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
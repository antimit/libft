#include "libft.h"


void	ft_putstr_fd(char *s, int fd)
{
	int	len;

	len = (int)ft_strlen(s);
	// if(fd == -1)
	// {
	//     exit(1);
	// }
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
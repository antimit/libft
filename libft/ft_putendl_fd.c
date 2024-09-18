#include "libft.h"


void	ft_putendl_fd(char *s, int fd)
{
	int	len;

	len = (int)ft_strlen(s);
	// if(fd == -1)
	// {
	//     exit(1);
	// }
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
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = nmemb * size;
	if (nmemb != 0 && total_size / nmemb != size)
	{
		return (NULL);
	}
	ptr = malloc(total_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_memset(ptr, 0, total_size);
	return (ptr);
}

// int	main(void)
// {
// 	// Example usage of my_calloc
// 	int *array = (int *)ft_calloc(5, sizeof(int));
// 	if (array != NULL)
// 	{
// 		// Use the array
// 		for (int i = 0; i < 5; i++)
// 		{
// 			printf("%d ", array[i]); // Should print: 0 0 0 0 0
// 		}
// 		free(array); // Don't forget to free the memory
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed.\n");
// 	}

// 	return (0);
// }

// void
// 	*ft_calloc(size_t count, size_t size)
// {
// 	void	*ptr;

// 	ptr = (void*)malloc(count * size);
// 	if (!ptr)
// 		return (NULL);
// 	ft_bzero(ptr, count);
// 	return (ptr);
// }
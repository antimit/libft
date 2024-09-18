/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onosul <onosul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:30:11 by onosul            #+#    #+#             */
/*   Updated: 2024/09/18 15:30:13 by onosul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	check_sign(char **p, int *sign)
{
	if (**p == '+' || **p == '-')
	{
		if (**p == '-')
		{
			*sign *= -1;
		}
		(*p)++;
	}
}

int	ft_atoi(const char *nptr)
{
	char		*p;
	int			sign;
	int			result;
	long long	max;

	max = 2147483647;
	p = (char *)nptr;
	sign = 1;
	result = 0;
	while (*p == 32 || (*p >= 9 && *p <= 13))
		p++;
	check_sign(&p, &sign);
	while (*p >= '0' && *p <= '9')
	{
		result = result * 10 + (*p - '0');
		if (sign == 1 && result > max)
			return (-1);
		else if (sign == -1 && result > max + 1)
			return (0);
		p++;
	}
	return (sign * result);
}

// int main()
// {
// 	int result = ft_atoi("-100");
// 	printf("%d",result);
// 	return (0);
// }

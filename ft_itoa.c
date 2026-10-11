/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 17:55:39 by balsaray          #+#    #+#             */
/*   Updated: 2026/10/11 10:26:27 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(long n)
{
	size_t	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	if (n == 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static void	ft_fill(char *res, long temp, size_t len)
{
	while (temp > 0)
	{
		res[--len] = (temp % 10) + '0';
		temp = temp / 10;
	}
}

char	*ft_itoa(int n)
{
	long	temp;
	size_t	len;
	char	*res;

	temp = n;
	len = ft_count(temp);
	res = (char *)malloc(len + 1);
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (n == 0)
		res[0] = '0';
	else
	{
		if (n < 0)
		{
			res[0] = '-';
			temp = -temp;
		}
		ft_fill(res, temp, len);
	}
	return (res);
}

// int	main(void)
// {
// 	printf("Number: %d\nConverted String: %s\n", 10, ft_itoa(10));
// 	printf("Number: %d\nConverted String: %s\n", -8643, ft_itoa(-8643));
// 	printf("Number: %d\nConverted String: %s\n", 17678, ft_itoa(17678));
// 	printf("Number: %d\nConverted String: %s\n", 0, ft_itoa(0));
// 	printf("Number: %ld\nConverted String: %s\n",
// 		-2147483648, ft_itoa(-2147483648));
// 	return (0);
// }

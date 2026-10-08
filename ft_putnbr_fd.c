/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 22:37:50 by balsaray          #+#    #+#             */
/*   Updated: 2026/10/03 09:21:23 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	res;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	res = (n % 10) + '0';
	write(fd, &res, 1);
}

// int	main(void)
// {
// 	ft_putnbr_fd(-2147483648, 1);
// 	ft_putchar_fd('\n',1);
// 	ft_putnbr_fd(2147483647, 1);
// 	ft_putchar_fd('\n',1);
// 	ft_putnbr_fd(-67643, 1);
// }

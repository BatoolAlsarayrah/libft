/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 10:54:38 by balsaray          #+#    #+#             */
/*   Updated: 2026/10/10 20:15:31 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;

	i = 0;
	s = (unsigned char *)str;
	while (i < n)
	{
		if (s[i] == (unsigned char)c)
			return (s + i);
		i++;
	}
	return (NULL);
}
// #include <string.h>
// int	main(void)
// {
// 	unsigned char s[]= "ab\0cd";
// 	unsigned char *res = ft_memchr(s,'c',5);
// 	unsigned char *res2 = (unsigned char *)memchr(s,'c', 5);
// 	printf ("mine: %td\n", res - s);
// 	printf ("original: %td", res2 - s);
// }

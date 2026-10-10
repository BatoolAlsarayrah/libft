/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 12:10:53 by balsaray          #+#    #+#             */
/*   Updated: 2026/10/09 16:12:08 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;
	size_t				i;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
// #include <string.h>
// int main()
// {
// 	int	d = 0;
// 	int	d2 = 0;
// 	const int	s = 124432;
// 	ft_memcpy(&d,&s, sizeof(int));
// 	memcpy(&d2,&s, sizeof(int));
// 	printf("mine: %d", d);
// 	printf("\n");
// 	printf("original: %d", d);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 10:34:38 by balsaray          #+#    #+#             */
/*   Updated: 2026/10/09 15:10:58 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
		n--;
	}
	return (s);
}
// #include <string.h>
// int main()
// {
// 	unsigned char s[] = "batoolhani1234";
// 	unsigned char m[] = "batoolhani1234";
// 	size_t n = sizeof(s);
// 	size_t i = 0;
// 	unsigned char *ptr;
// 	ptr = (unsigned char *)ft_memset(s, 'a', n);
// 	unsigned char *ptr2;
// 	ptr2 = (unsigned char *)memset(m, 'b', n);
// 	while (i < n)
// 	{
// 		printf("%c ", ptr[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	i = 0;
// 	while (i < n)
// 	{
// 		printf("%c ", ptr2[i]);
// 		i++;
// 	}
// }

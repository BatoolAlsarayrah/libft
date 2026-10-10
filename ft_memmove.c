/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 13:21:49 by balsaray          #+#    #+#             */
/*   Updated: 2026/10/10 19:38:25 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d < s)
	{
		while (n--)
		{
			*d++ = *s++;
		}
	}
	else
	{
		s += n;
		d += n;
		while (n--)
		{
			*(--d) = *(--s);
		}
	}
	return (dst);
}
// #include <string.h>
// int main()
// {
// unsigned char   d2[20] = "batool";
// unsigned char s[20] = "batool";
// ft_memmove(d2 + 3,d2, 7);
// memmove(s + 3, s, 7);
// printf("mine: %s\n", d2);
// printf("orsource: %s", s);

// int arr[5] = {1, 2, 3, 4, 5};
// int arr2[5] = {1, 2, 3, 4, 5};
// ft_memmove(arr + 2,arr, 12);
// memmove(arr2 + 2, arr2, 12);
// int i = 0;
// while (i < 5)
// {
// 	printf("mine arr[%d]: %d\n", i, arr[i]);
// 	i++;
// }
// printf("\n");
// i = 0;
// while (i < 5)
// {
// 	printf("original arr[%d]: %d\n", i,arr2[i]);
// 	i++;
// }
// }

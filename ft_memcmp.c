/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 12:26:27 by balsaray          #+#    #+#             */
/*   Updated: 2026/10/10 20:56:07 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	i = 0;
	while (i < n && s1[i] == s2[i])
	{
		i++;
	}
	if (i >= n)
		return (0);
	return (s1[i] - s2[i]);
}
// #include <string.h>
// int main()
// {
// 	const char s1[] = "ab\0c";
// 	const char s2[] = "ab\0e";
// 	printf ("mine: %d\n", ft_memcmp(s1,s2, 4));
// 	printf ("original: %d", memcmp(s1,s2, 4));
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 12:51:45 by balsaray          #+#    #+#             */
/*   Updated: 2026/10/10 21:37:59 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	if (to_find[0] == '\0')
		return ((char *)str);
	i = 0;
	while (i < len && str[i] != '\0')
	{
		j = 0;
		while (i + j < len && str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			if (to_find[j + 1] == '\0')
				return ((char *)str + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
// #include <bsd/string.h>
// int main()
// {
// 	const char s[] = "hello world";
// 	const char s2[] = "borld";

// 	char *res = ft_strnstr(s,s2,11);
// 	char *res2 = (char *)strnstr(s,s2,11);
// 	printf ("mine: %s\n", res);
// 	printf ("original: %s", res2);
// }

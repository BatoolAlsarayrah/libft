/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 22:03:34 by balsaray          #+#    #+#             */
/*   Updated: 2026/10/10 18:49:43 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *src, int c)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		if (src[i] == (char)c)
			return ((char *)src + i);
		i++;
	}
	if (src[i] == (char)c)
		return ((char *)src + i);
	return (NULL);
}
// #include <string.h>
// int	main(void)
// {
// 	const char s[]= "batool";
// 	char *res = ft_strchr(s,'o');
// 	char *res2 = (char *)strchr(s,'o');
// 	printf ("mine: %s\n", res);
// 	printf ("original: %s", res2);
// }

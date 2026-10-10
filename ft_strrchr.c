/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 11:13:19 by balsaray          #+#    #+#             */
/*   Updated: 2026/10/10 19:03:56 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	size_t	i;

	i = ft_strlen(src);
	while (i > 0)
	{
		if (src[i] == (char)c)
			return ((char *)src + i);
		i--;
	}
	if (src[i] == (char)c)
		return ((char *)src + i);
	return (NULL);
}
// #include <string.h>
// int	main(void)
// {
// 	const char s[]= "batool";
// 	char *res = ft_strrchr(s,'o');
// 	char *res2 = (char *)strrchr(s,'o');
// 	printf ("mine: %s\n", res);
// 	printf ("original: %s", res2);
// }

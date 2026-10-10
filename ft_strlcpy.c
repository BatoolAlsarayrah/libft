/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 14:56:07 by balsaray          #+#    #+#             */
/*   Updated: 2026/10/10 18:50:36 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	s;

	i = 0;
	s = ft_strlen(src);
	if (size == 0)
		return (s);
	while (src[i] != '\0' && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (s);
}
// #include <string.h>
// int main()
// {
// 	char dst[] = "xxxxxxxxxxxxxxxxxxxxx";
// 	char dst2[] = "xxxxxxxxxxxxxxxxxxxxx";
// 	char src[] = "";
// 	size_t ft=ft_strlcpy(dst,src,2);
// 	size_t bs=strlcpy(dst2,src,2);
// 	printf("mine: return:%zu dst:%s\n",ft, dst);
// 	printf("original: return:%zu dst:%s",bs, dst2);
// }

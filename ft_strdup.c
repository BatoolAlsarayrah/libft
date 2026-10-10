/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 11:56:32 by balsaray          #+#    #+#             */
/*   Updated: 2026/10/10 23:20:20 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	len;
	char	*dest;

	len = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	ft_memcpy(dest, src, len + 1);
	return (dest);
}
// #include <string.h>
// int main()
// {
// 	char dst[] = "  &8 #";
// 	char *ft=ft_strdup(dst);
// 	char *bs=strdup(dst);
// 	printf("mine: dst:%s\n",ft);
// 	printf("original: dst:%s",bs);
// 	free(ft);
// 	free(bs);
// }

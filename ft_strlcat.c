/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 12:15:29 by balsaray          #+#    #+#             */
/*   Updated: 2026/10/10 18:22:46 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	nul;
	size_t	slen;
	size_t	dlen;

	i = 0;
	nul = 0;
	while (nul < size && dst[nul])
	{
		nul++;
	}
	dlen = nul;
	slen = ft_strlen(src);
	if (size <= dlen)
		return (size + slen);
	while (src[i] && nul < (size - 1))
	{
		dst[nul] = src[i];
		i++;
		nul++;
	}
	dst[nul] = '\0';
	return (dlen + slen);
}
//  #include <string.h>
//  int main()
//  {
//  	char dst[12] = "abc";
//  	//char dst2[12] = "abc";
//  	char src[] = "abc";
//  	size_t ft=ft_strlcat(dst,src,12);
//  	//size_t bs=strlcat(dst2,src,12);
//  	printf("mine: return:%zu value:%s\n",ft, dst);
//  	//printf("original: return:%zu value:%s\n",bs, dst2);
// }

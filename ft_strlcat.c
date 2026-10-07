/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 12:15:29 by balsaray          #+#    #+#             */
/*   Updated: 2026/10/07 15:00:47 by balsaray         ###   ########.fr       */
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
	nul = ft_strlen(dst);
	dlen = nul;
	slen = ft_strlen(src);
	if (size < dlen)
		return (size + slen);
	while (src[i] && i < (size - 1))
	{
		dst[nul] = src[i];
		i++;
		nul++;
	}
	dst[nul] = '\0';
	return (dlen + slen);
}

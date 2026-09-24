/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 14:56:07 by balsaray          #+#    #+#             */
/*   Updated: 2026/09/24 16:27:07 by balsaray         ###   ########.fr       */
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

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     const char s[] = "helo";
//     char d[3];
//     printf("%zu %s\n %s",ft_strlcpy(d,s,6), s,d);

//     return 0;
// }

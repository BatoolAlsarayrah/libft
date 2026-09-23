/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 12:10:53 by balsaray          #+#    #+#             */
/*   Updated: 2026/09/23 13:20:04 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memcpy(void *dest, const void *src, size_t n)
{
	const char	*s;
	char		*d;

	d = (char *)dest;
	s = (const char *)s;
	while (n--)
	{
		d[n] = s[n];
	}
	return (dest);
}

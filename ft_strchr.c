/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 22:03:34 by balsaray          #+#    #+#             */
/*   Updated: 2026/09/25 23:34:19 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *src, int c)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		if (src[i] == (char)c)
			return ((char *)src);
		src++;
	}
	if (src[i] == (char)c)
		return ((char *)src);
	return (NULL);
}

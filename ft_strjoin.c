/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 10:38:38 by balsaray          #+#    #+#             */
/*   Updated: 2026/10/01 14:30:55 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	size_t	i;
	size_t	j;
	char	*resstr;

	i = 0;
	j = 0;
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	resstr = (char *)malloc((s1len + s2len + 1) * (sizeof(char)));
	if (!resstr)
		return (NULL);
	while (j < s1len)
	{
		resstr[i++] = s1[j++];
	}
	j = 0;
	while (j < s2len)
	{
		resstr[i++] = s2[j++];
	}
	resstr[i] = '\0';
	return (resstr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%s\n", ft_strjoin("Hello", " World!"));

// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 10:38:38 by balsaray          #+#    #+#             */
/*   Updated: 2026/10/11 10:02:07 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*resstr;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	resstr = malloc(((ft_strlen(s1) + ft_strlen(s2)) + 1) * (sizeof(char)));
	if (!resstr)
		return (NULL);
	while (s1[j])
	{
		resstr[i++] = s1[j++];
	}
	j = 0;
	while (s2[j])
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 11:42:41 by balsaray          #+#    #+#             */
/*   Updated: 2026/10/10 19:53:17 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && str1[i] && str2[i] && str1[i] == str2[i])
	{
		i++;
	}
	if (i >= n)
		return (0);
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
// #include <string.h>
// int main()
// {
// 	const char s1[] = "";
// 	const char s2[] = "a";
// 	printf ("mine: %d\n", ft_strncmp(s1,s2, 1));
// 	printf ("original: %d", strncmp(s1,s2, 1));
// }

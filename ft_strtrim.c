/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 14:32:49 by balsaray          #+#    #+#             */
/*   Updated: 2026/10/08 10:33:39 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_trim(char const *set, int c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*resstr;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	while (s1[i] && ft_trim(set, s1[i]))
		i++;
	while (i < j && ft_trim(set, s1[j]))
		j--;
	if (i > j)
		return (ft_strdup(""));
	resstr = (char *)malloc((j - i) + 2);
	if (!resstr)
		return (NULL);
	ft_memcpy(resstr, s1 + i, (j - i) + 1);
	resstr[(j - i) + 1] = '\0';
	return (resstr);
}

// int main()
// {
//     char *s1  = "bbccaMariabbcca";
//     char  *set = "abc";
//     printf("%s",ft_strtrim(s1, set));
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 09:52:45 by balsaray          #+#    #+#             */
/*   Updated: 2026/10/11 10:20:14 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char sep)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && (*s == sep))
			s++;
		if (*s)
		{
			count++;
			while (*s && !(*s == sep))
				s++;
		}
	}
	return (count);
}

static char	*allocpy(char const *s, char sep)
{
	char	*word;
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	while (s[len] && !(s[len] == sep))
		len++;
	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

static void	free_arr(char **res, int i)
{
	while (i >= 0)
		free(res[i--]);
	free(res);
}

static int	fill_word(char **res, char const *s, char sep)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s && (*s == sep))
			s++;
		if (*s)
		{
			res[i] = allocpy(s, sep);
			if (!res[i])
			{
				free_arr(res, i - 1);
				return (0);
			}
			i++;
			while (*s && !(*s == sep))
				s++;
		}
	}
	res[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	if (!s)
		return (NULL);
	res = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	if (!fill_word(res, s, c))
		return (NULL);
	return (res);
}

// int	main(void)
// {
// 	char const s[] = "  batool  hani      alsarayrah";
// 	char **arr = ft_split(s,' ');
// 	if (!arr)
//         return (1);
// 	int	i = 0;
// 	while(arr[i])
// 	{
// 		printf("%s\n", arr[i]);
// 		i++;
// 	}
// 	free_arr(arr, i - 1);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 09:52:45 by balsaray          #+#    #+#             */
/*   Updated: 2026/10/03 12:30:51 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_sep(char c, char sep)
{
	return (c == sep);
}

static int	count_words(char const *s, char sep)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && is_sep(*s, sep))
			s++;
		if (*s)
		{
			count++;
			while (*s && !is_sep(*s, sep))
				s++;
		}
	}
	return (count);
}

static char	*allocpy(char const *s, char sep)
{
	char	*word;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (s[len] && !is_sep(s[len], sep))
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

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	res = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	while (*s)
	{
		while (*s && is_sep(*s, c))
			s++;
		if (*s)
		{
			res[i] = allocpy(s, c);
			if (!res[i])
				return (free_arr(res, i - 1), NULL);
			i++;
			while (*s && !is_sep(*s, c))
				s++;
		}
	}
	res[i] = NULL;
	return (res);
}

// int	main(void)
// {
// 	//char const s[] = "  batool  hani      alsarayrah";
// 	char **arr = ft_split(NULL,' ');
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 10:12:27 by balsaray          #+#    #+#             */
/*   Updated: 2026/10/11 10:31:10 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	unsigned int	i;
	char			*res;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	i = 0;
	res = (char *)malloc(len + 1);
	if (!res)
		return (NULL);
	while (i < len)
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

// char to_upper_even(unsigned int i, char c)
// {
//     if (i % 2 == 0 && c >= 'a' && c <= 'z')
//         return (c - 32);
//     return (c);
// }

// int	main(void)
// {
// 	char	(*f)(unsigned int, char);
// 	char	*str;
// 	char	*str2;

// 	str = "batool";
// 	f = to_upper_even;
// 	str2 = ft_strmapi(str,f);
// 	printf("%s", str2);
// 	free(str2);
// }

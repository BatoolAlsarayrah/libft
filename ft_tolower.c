/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 22:01:28 by balsaray          #+#    #+#             */
/*   Updated: 2026/10/09 11:36:56 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
	{
		ch += 32;
	}
	return (ch);
}
// #include <ctype.h>
// int main()
// {
// 	printf("mine: %d\n",ft_tolower(-1));
// 	printf("original: %d\n",tolower(-1));
// 	return (0);
// }

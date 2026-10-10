/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 11:42:41 by balsaray          #+#    #+#             */
/*   Updated: 2026/10/09 10:34:55 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// #include <ctype.h>
// int main()
// {
// 	printf("mine: %d\n",ft_isascii(-3));
// 	printf("original: %d\n",isascii(-3));
// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 11:49:14 by balsaray          #+#    #+#             */
/*   Updated: 2026/10/09 10:36:37 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
// #include <ctype.h>
// int main()
// {
// 	printf("mine: %d\n",ft_isprint(-3));
// 	printf("original: %d\n",isprint(-3));
// 	return (0);
// }

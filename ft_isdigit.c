/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 11:04:56 by balsaray          #+#    #+#             */
/*   Updated: 2026/10/09 10:17:18 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
//  #include <ctype.h>
// int main()
// {
// 	printf("mine: %d\n",ft_isdigit('5'));
// 	printf("original: %d\n",isdigit('5'));
// }

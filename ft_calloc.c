/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 09:22:58 by balsaray          #+#    #+#             */
/*   Updated: 2026/10/10 22:48:14 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	if ((nmemb * size) == 0)
		return (malloc(1));
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
// int	main(void)
// {
// 	int		*arr;
// 	int		*arr2;
// 	size_t	i;

// 	arr = ft_calloc(5, sizeof(int));
// 	arr2 = calloc(5, sizeof(int));
// 	if (!arr || !arr2)
// 	{
// 		printf("allocation failed\n");
// 		free(arr);
// 		free(arr2);
// 		return (1);
// 	}
// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("mine[%zu]: %d   original[%zu]: %d\n", i, arr[i], i, arr2[i]);
// 		i++;
// 	}
// 	free(arr);
// 	free(arr2);
// 	return (0);
// }

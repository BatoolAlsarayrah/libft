/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 10:58:32 by balsaray          #+#    #+#             */
/*   Updated: 2026/10/07 11:10:52 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next)
	{
		lst = lst -> next;
	}
	return (lst);
}

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;

// 	head = NULL;
// 	node1 = ft_lstnew("batool");
// 	node2 = ft_lstnew("yasmeen");
// 	node3 = ft_lstnew("marah");

// 	if (!node1 || !node2 || !node3 )
// 		return (1);
// 	ft_lstadd_front(&head, node1);
// 	ft_lstadd_front(&head, node2);
// 	ft_lstadd_front(&head, node3);

// 	printf("%s\n%p\n", (char *)(ft_lstlast(head))->content,
// 	 (void *)(ft_lstlast)(head)->next);
// }

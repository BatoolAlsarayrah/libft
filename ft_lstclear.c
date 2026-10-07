/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 12:18:57 by balsaray          #+#    #+#             */
/*   Updated: 2026/10/07 15:06:36 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)-> next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	free(*lst);
	*lst = NULL;
}

// void	del(void *content)
// {
// 	free(content);
// }
// int main()
// {
// 	void	(*f)(void *);
// 	t_list	*head;
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;

// 	head = NULL;
// 	node1 = ft_lstnew(ft_strdup("batool"));
// 	node2 = ft_lstnew(ft_strdup("yasmeen"));
// 	node3 = ft_lstnew(ft_strdup("marah"));
// 	f = del;

// 	if (!node1 || !node2 || !node3 )
// 		return (1);
// 	ft_lstadd_back(&head, node1);
// 	ft_lstadd_back(&head, node2);
// 	ft_lstadd_back(&head, node3);
// 	ft_lstclear(&head,f);
// 	printf("%d\n",ft_lstsize(head));
// }

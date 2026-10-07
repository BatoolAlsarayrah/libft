/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 11:29:47 by balsaray          #+#    #+#             */
/*   Updated: 2026/10/07 15:03:06 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst -> content);
	free(lst);
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
// 	node1->next = node2->next;
// 	ft_lstdelone(node2,f);
// 	printf("%d\n",ft_lstsize(head));
// }

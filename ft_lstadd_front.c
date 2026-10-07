/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 13:35:45 by balsaray          #+#    #+#             */
/*   Updated: 2026/10/06 16:06:29 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
    return ;
	new->next = *lst;
	*lst = new;
}

// int	main()
// {
// 	t_list	*head;
// 	t_list	*node2;

// 	head = ft_lstnew("marah");
// 	node2 = ft_lstnew("batool");
// 	if (!head || !node2)
// 		return (1);
// 	printf("before: head = %s, next = %p\n", (char *)head->content, (void *)head->next);
// 	ft_lstadd_front(&head, node2);
// 	printf("after:  head = %s, next = %s\n", (char *)head->content, (char *)head->next->content);
// 	printf("last next = %p\n", (void *)head->next->next);
// 	printf("after:  head = %s, next = %s\n", (char *)node2->content, (char *)node2->next->content);

// 	free(head->next);
// 	free(node2);
// 	return (0);
// }

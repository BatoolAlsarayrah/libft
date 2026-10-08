/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 13:35:45 by balsaray          #+#    #+#             */
/*   Updated: 2026/10/07 11:03:51 by balsaray         ###   ########.fr       */
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

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*node2;

// 	head = ft_lstnew("marah");
// 	node2 = ft_lstnew("batool");
// 	if (!head || !node2)
// 		return (1);
// 	ft_lstadd_front(&head, node2);
//
// 	free(head->next);
// 	free(node2);
// 	return (0);
// }

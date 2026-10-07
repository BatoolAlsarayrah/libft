/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 14:59:28 by balsaray          #+#    #+#             */
/*   Updated: 2026/10/06 16:21:45 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst -> next;
	}
	return (count);
}

int main()
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	head = ft_lstnew("marah");
	node1 = ft_lstnew("batool");
	node2 = ft_lstnew("yasmeen");
	node3 = ft_lstnew("marah");
	if (!head || !node1 || !node2 || !node3 )
		return (1);
	ft_lstadd_front(&node3, node2);
	ft_lstadd_front(&node2, node1);
	ft_lstadd_front(&head, node1);
	printf("%d\n",ft_lstsize(head));
}

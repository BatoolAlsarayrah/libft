/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 12:58:19 by balsaray          #+#    #+#             */
/*   Updated: 2026/10/11 11:28:40 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	if (!lst || !f)
		return ;
	temp = lst;
	while (temp)
	{
		f(temp->content);
		temp = temp->next;
	}
}
// void	toup(void *content)
// {
// 	int i;
// 	unsigned char *str = (unsigned char *)content;
// 	i = 0;
// 	while (str[i])
// 	{
// 		str[i] = str[i] - 32;
// 		i++;
// 	}
// }
// int main()
// {
// 	t_list *head;
// 	t_list *node1;
// 	t_list *node2;
// 	t_list *node3;
// 	t_list *temp;
// 	void (*f)(void *);

// 	head = NULL;
// 	node1 = ft_lstnew(ft_strdup("batool"));
// 	node2 = ft_lstnew(ft_strdup("hani"));
// 	node3 = ft_lstnew(ft_strdup("alsarayrah"));

// 	ft_lstadd_back(&head, node3);
// 	ft_lstadd_back(&head, node2);
// 	ft_lstadd_back(&head, node1);
// 	f = toup;
// 	if (!node1 || !node2 || !node3)
// 		return (1);
// 	ft_lstiter(head, f);
// 	temp = head;
// 	while (temp)
// 	{
// 		printf("%s\n", (char *)temp->content);
// 		temp = temp->next;
// 	}
// }

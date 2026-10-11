/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:55:42 by balsaray          #+#    #+#             */
/*   Updated: 2026/10/11 12:12:53 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*newnode;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	newlst = NULL;
	while (lst)
	{
		content = f(lst->content);
		newnode = ft_lstnew(content);
		if (!newnode)
		{
			del(content);
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, newnode);
		lst = lst->next;
	}
	return (newlst);
}
// void *toup(void *content)
// {
// 	int i = 0;

// 	unsigned char *strr = (unsigned char *)content;
// 	unsigned char *str = malloc(10);
// 	while (strr[i])
// 	{
// 		strr[i] = strr[i] - 32;
// 		i++;
// 	}
// 	//str[i] = '\0';
// 	return((void *)str);
// }
// void	del(void *content)
// {
// 	free(content);
// }

// int main()
// {
// 	t_list *head;
// 	t_list *node1;
// 	t_list *node2;
// 	t_list *node3;
// 	t_list *new;
// 	t_list *temp;
// 	t_list *temp1;
// 	void *(*f)(void *);

// 	head = NULL;
// 	node1 = ft_lstnew(ft_strdup("batool"));
// 	node2 = ft_lstnew(ft_strdup("hani"));
// 	node3 = ft_lstnew(ft_strdup("alsarayrah"));

// 	ft_lstadd_back(&head, node1);
// 	ft_lstadd_back(&head, node2);
// 	ft_lstadd_back(&head, node3);
// 	f = toup;
// 	if (!node1 || !node2 || !node3)
// 		return (1);
// 	temp1 = head;
// 	while (temp1)
//  	{
//  		printf("%s\n", (char *)temp1->content);
//  		temp1 = temp1->next;
//  	}
// 	new = ft_lstmap(node1,f,del);
// 	temp = new;
// 	while (temp)
//  	{
//  		printf("%s\n", (char *)temp->content);
//  		temp = temp->next;
//  	}
// }

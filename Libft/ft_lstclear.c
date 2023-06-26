/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshermat <sshermat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 20:47:26 by sshermat          #+#    #+#             */
/*   Updated: 2023/06/03 19:27:31 by sshermat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;

	if (!lst)
		return ;
	while (*lst)
	{
		node = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = node;
	}
}

/*
int main()
{
	char *str1 = ft_strdup("Time");
	char *str2 = ft_strdup("to Change");
	char *str3 = ft_strdup("the Life");
	
	t_list *node1 = ft_lstnew(str1);
	t_list *node2 = ft_lstnew(str2);
	t_list *node3 = ft_lstnew(str3);

	node1->next = node2;
	node2->next = node3;
	
	t_list *list = node1;
	printf("Original list:\n");

	while (list != NULL)
	{
		char *value = (char *)(list->content);
		printf("%s\n", value);
		list = list->next;
	}
	
	printf("\nClearing list...\n\n");
	ft_lstclear(&list, free);
	
	if (list == NULL)
		printf("List cleared\n");
	else
		printf("List is not cleared\n");
	
	return 0;
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshermat <sshermat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 16:40:46 by sshermat          #+#    #+#             */
/*   Updated: 2023/05/30 20:44:26 by sshermat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	(*del)(lst->content);
	free(lst);
}
/*
void    deleteStr(void *data)
{
	char *value = (char *)data;
	printf("Deleting value: %s\n", value);
	free(value);
}

int main()
{    
	t_list *node1 = ft_lstnew(ft_strdup("Hello"));
	t_list *node2 = ft_lstnew(ft_strdup("World"));
	t_list *node3 = ft_lstnew(ft_strdup("Cup"));

	node1->next = node2;
	node2->next = node3;
	
	t_list *current = node1;
	while (current != NULL)
	{
		char *value = (char *)(current->content);
		printf("%s\n", value);
		current = current->next;
	}
	
	printf("Deleting 2nd node...\n");
	ft_lstdelone(node2, deleteStr);
	
	printf("Updated list:\n");
	current = node1;
	while (current != NULL)
	{
		char *value = (char *)(current->content);
		printf("%s\n", value);
		current = current->next;
	}
	ft_lstdelone(node1, deleteStr);
	ft_lstdelone(node3, deleteStr);
	return (0);
}*/
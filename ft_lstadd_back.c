/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshermat <sshermat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:18:18 by sshermat          #+#    #+#             */
/*   Updated: 2023/05/27 16:37:19 by sshermat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	if (*lst != NULL)
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;
}
/*
int main()
{
	t_list *node1 = ft_lstnew("Passion");
	t_list *node2 = ft_lstnew("Determination");
	t_list *node3 = ft_lstnew("Perseverance");
	
	t_list *list = NULL;
	
	ft_lstadd_back(&list, node3);
	ft_lstadd_back(&list, node2);
	ft_lstadd_back(&list, node1);
	
	t_list *current = list;
	while (current != NULL)
	{
		printf("Node content: %s\n", (char *)current->content);
		current = current->next;
	}
	return (0);
}*/
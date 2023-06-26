/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshermat <sshermat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 20:19:21 by sshermat          #+#    #+#             */
/*   Updated: 2023/05/26 21:01:58 by sshermat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*
int main()
{
	t_list *node1 = ft_lstnew("Hello");
	t_list *node2 = ft_lstnew("Hola");
	t_list *node3 = ft_lstnew("Ola");

	node1->next = node2;
	node2->next = node3;
	
	t_list *last = ft_lstlast(node1);
	printf("Last node: %s\n", (char *)last->content);
}*/
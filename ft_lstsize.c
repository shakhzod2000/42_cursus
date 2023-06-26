/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshermat <sshermat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 18:39:29 by sshermat          #+#    #+#             */
/*   Updated: 2023/05/26 20:16:45 by sshermat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/*
int main()
{
	t_list *node1 = ft_lstnew("node 1");
	t_list *node2 = ft_lstnew("node 2");
	t_list *node3 = ft_lstnew("node 3");
	
	node1->next = node2;
	node2->next = node3;
	
	int size = ft_lstsize(node1);

	printf("size of linked list: %d\n", size);
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshermat <sshermat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 16:40:45 by sshermat          #+#    #+#             */
/*   Updated: 2023/05/31 20:26:14 by sshermat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*list_iter;

	if (lst == NULL)
		return ;
	list_iter = lst;
	while (list_iter != NULL)
	{
		(*f)(list_iter->content);
		list_iter = list_iter->next;
	}
}

/*
void printContent(void *data)
{
	char *value = (char *)data;
	printf("%s\n", value);
}

int main()
{
	t_list *node1 = ft_lstnew("Higher");
	t_list *node2 = ft_lstnew("Faster");
	t_list *node3 = ft_lstnew("Stronger");

	node1->next = node2;
	node2->next = node3;

	printf ("original list:\n");
	t_list *current = node1;
	while (current != NULL)
	{
		char *value = (char *)(current->content);
		printf ("%s\n", value);
		current = current->next;
	}
	printf ("\nApplying the function...\n");

	ft_lstiter(node1, printContent); // Calling the function;
	return 0;
}*/
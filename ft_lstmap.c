/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshermat <sshermat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 20:32:59 by sshermat          #+#    #+#             */
/*   Updated: 2023/06/03 19:48:32 by sshermat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*node;

	if (!f || !lst)
		return (NULL);
	new = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&node, (*del));
			return (NULL);
		}
		ft_lstadd_back(&new, node);
		lst = lst->next;
	}
	return (new);
}

/*
void *add_char(void *chr)
{
	char *value = (char *)chr;
	char *result = malloc(sizeof(char));
	*result = *value + 0;
	return result;
}

void print_list(t_list *list)
{
	while (list != NULL)
	{
		char *value = (char *)(list->content);
		printf("%s\n", value);
		list = list->next;
	}
}

void delete_char(void *data)
{
	free(data);
}

int main()
{
	t_list *node1 = ft_lstnew("Make");
	t_list *node2 = ft_lstnew("It");
	t_list *node3 = ft_lstnew("Happen");

	node1->next = node2;
	node2->next = node3;

	printf("Original list:\n");
		
	print_list(node1);
	
	t_list *new_list = ft_lstmap(node1, add_char, delete_char);
	
	if (new_list != NULL)
	{
		printf("New list:\n");
		print_list(new_list);
	}
	else
		printf("Error creating new list.\n");

	ft_lstclear(&node1, delete_char);
	ft_lstclear(&new_list, delete_char);
	return 0;
}*/
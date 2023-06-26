/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshermat <sshermat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 16:13:38 by sshermat          #+#    #+#             */
/*   Updated: 2023/06/08 19:20:55 by sshermat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	array = (void *)malloc (nmemb * size);
	if (array == 0)
		return (0);
	ft_bzero (array, (nmemb * size));
	return (array);
}

/*
int main()
{
	char *a;
	char *b;
	int i;
	//size_t size = 4;
	
	a = (char *)ft_calloc(10, 8);
	for( i=0 ; i < 10 ; i++)
		printf("%d ",a[i]);
	printf("\n");
	
	b = (char *)calloc(10, 8);
	for( i=0 ; i < 10 ; i++)
		printf("%d ", b[i]);
}*/
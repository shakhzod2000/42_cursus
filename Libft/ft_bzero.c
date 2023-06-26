/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshermat <sshermat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 20:08:33 by sshermat          #+#    #+#             */
/*   Updated: 2023/05/13 18:44:06 by sshermat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
/*
int	main(void)
{
    char a[20] = "Hello World!";
	size_t	n = 10;
	
    ft_bzero(a+3, n);
	printf("%s\n", a);
    bzero(a+3, n);
	printf("%s\n", a);
}*/

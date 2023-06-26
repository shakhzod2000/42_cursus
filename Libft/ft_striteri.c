/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshermat <sshermat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 19:02:33 by sshermat          #+#    #+#             */
/*   Updated: 2023/05/23 20:10:17 by sshermat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (s == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}
/*
void print_character(unsigned int i, char *c)
{
	i = 1;
	*c += i;
}

int main()
{
	char a[] = "ABCDEFGH";
	printf("before: %s\n", a);

	ft_striteri(a, print_character);

	printf("after: %s\n", a);
}*/
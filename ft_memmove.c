/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshermat <sshermat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 19:11:37 by sshermat          #+#    #+#             */
/*   Updated: 2023/05/20 18:52:01 by sshermat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (dest == 0 && src == 0)
		return (0);
	if (dest > src)
	{
		while (i < n)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
	}
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*
int main()
{
	char src[] = "ABCDEFGH";
	//char src[] = "IT isnformation technology";

	size_t n = 4;
	printf("%s\n", (unsigned char *)ft_memmove(src, src+2, n));
	
	char sc[] = "ABCDEFGH";
	printf("%s\n", (unsigned char *)memmove(sc, sc+2, n));
}*/
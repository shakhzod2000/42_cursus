/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshermat <sshermat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 17:01:46 by sshermat          #+#    #+#             */
/*   Updated: 2023/06/08 22:15:36 by sshermat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (src[i] != 0 && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}

/*
int main(void)
{
	const char src[] = "You just want attention";
	char dest[] = "hello";
	size_t size = 24;
	
	printf("%zu\n", ft_strlcpy(dest, src, size));
	printf("%s\n", dest);
	
	const char *sc = "You just want attention";
	char dst[] = "hello";
	printf("%zu\n", strlcpy(dst, sc, size));
	printf("%s\n", dst);

}*/
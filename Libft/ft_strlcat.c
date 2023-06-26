/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshermat <sshermat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 20:41:28 by sshermat          #+#    #+#             */
/*   Updated: 2023/05/10 13:47:32 by sshermat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	i = 0;
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src[i] && i < size - dlen - 1)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = 0;
	return (dlen + slen);
}
/*
int main(void)
{
    const char src[] = "Worldcup";
    char dest[] = "Hello";
    size_t size = 5;
    
    printf("%zu\n", ft_strlcat(dest, src, size));
    printf("%s\n", dest);

    const char sc[] = "Worldcup";
    char dst[] = "Hello";

    printf("%zu\n", strlcat(dst, sc, size));
    printf("%s\n", dst);
}*/

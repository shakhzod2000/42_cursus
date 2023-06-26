/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshermat <sshermat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 19:24:23 by sshermat          #+#    #+#             */
/*   Updated: 2023/05/13 20:54:08 by sshermat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*dest;

	size = ft_strlen(s);
	dest = (char *)malloc(size * sizeof(char) + 1);
	if (dest == 0)
		return (0);
	ft_memcpy (dest, s, size);
	dest[size] = '\0';
	return (dest);
}
/*
int main()
{
	char *src = "maintenance";
	char *dup;
	char *dpl;

	dup = ft_strdup(src);
	printf ("Duplicated string: '%s'\n", dup);

	dpl = strdup(src);
	printf ("Duplicated string: '%s'\n", dpl);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshermat <sshermat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:49:52 by sshermat          #+#    #+#             */
/*   Updated: 2023/05/26 16:18:17 by sshermat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_end(char const *s1, char const *set)
{
	size_t			len;
	size_t			i;

	len = ft_strlen(s1);
	i = 0;
	while (set[i])
	{
		i = 0;
		while (set[i] && s1[len - 1] != set[i])
			i++;
		if (s1[len - 1] == set[i])
			len--;
	}
	return (len - 1);
}

static unsigned int	ft_start(char const *s1, char const *set)
{
	size_t			i;
	size_t			j;

	i = 0;
	j = 0;
	while (set[j])
	{
		j = 0;
		while (s1[i] != set[j] && set[j])
			j++;
		if (s1[i] == set[j])
			i++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*trim;
	unsigned int	len;
	unsigned int	end;

	if (*s1 == '\0')
	{
		trim = (char *)malloc((1) * sizeof(char));
		if (!trim)
			return (NULL);
		trim[0] = '\0';
		return (trim);
	}
	end = ft_end(s1, set);
	len = end - ft_start(s1, set) + 1;
	return (ft_substr(s1, ft_start(s1, set), len));
}

/*
int	main(void)
{
	//char a[] = "31A2This is test data3A1";
	char b[] = "abcdba";
	char set[] = "c";
	char *new;
	
	new = ft_strtrim(b, set);
	printf ("%s\n", new);
}*/
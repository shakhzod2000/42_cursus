/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshermat <sshermat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:14:49 by sshermat          #+#    #+#             */
/*   Updated: 2023/05/25 20:47:26 by sshermat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_start(char const *s)
{
	char	*sbstr;

	s = 0;
	sbstr = (char *)malloc(1 * sizeof(char));
	if (sbstr == NULL)
		return (NULL);
	sbstr[0] = '\0';
	return (sbstr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sbstr;
	size_t	i;

	if ((int)len < 0 || (int)len > 65535)
		len = ft_strlen(s);
	if (start >= ft_strlen(s))
		return (ft_start(s));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	sbstr = (char *)malloc((len + 1) * sizeof(char));
	if (sbstr == NULL)
		return (NULL);
	i = 0;
	while (s[start] && i < len)
	{
		sbstr[i] = s[start + i];
		i++;
	}
	sbstr[i] = '\0';
	return (sbstr);
}

/*
int main()
{
	char    *a = "This is the test string";
	char    *sbstr;
	
	sbstr = ft_substr(a, 17, 6);
	printf ("%s\n", sbstr);  
}*/
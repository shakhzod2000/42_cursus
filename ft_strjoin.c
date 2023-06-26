/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshermat <sshermat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 19:35:07 by sshermat          #+#    #+#             */
/*   Updated: 2023/06/08 18:56:07 by sshermat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*ns;

	i = 0;
	j = 0;
	ns = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (ns == 0)
		return (0);
	while (s1[i])
	{
		ns[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		ns[i + j] = s2[j];
		j++;
	}
	ns[i + j] = '\0';
	return (ns);
}

/*
int main()
{
	char a[] = "It is never";
	char b[] = " late to study!";
	
	char *c = ft_strjoin(a, b); 
	
	printf("%s\n", c);
}*/
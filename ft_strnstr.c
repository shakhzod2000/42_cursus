/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshermat <sshermat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:07:05 by sshermat          #+#    #+#             */
/*   Updated: 2023/05/20 19:32:04 by sshermat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[j] == 0)
		return ((char *)big);
	while (big[i] && (i + j) < len)
	{
		while (little[j] == big[i + j] && (i + j) < len)
		{
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
		j = 0;
	}
	return (0);
}

/*
int main()
{
	const char a[] = "This is the only right place";
	const char b[] = "This is the only right place emnri";
	size_t len = 50;
	
	printf("%s\n", ft_strnstr(a, b, len));
	printf("%s\n", strnstr(a, b, len));    
}*/
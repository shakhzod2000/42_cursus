/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshermat <sshermat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 19:52:14 by sshermat          #+#    #+#             */
/*   Updated: 2023/06/19 21:00:22 by sshermat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_array(char **ptr, int i)
{
	while (i > 0)
	{
		i--;
		free(ptr[i]);
	}
	free(ptr);
	return (0);
}

static int	ft_count_words(char const *string, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (string[i] != '\0')
	{
		if (string[i] == c)
			i++;
		else
		{
			count++;
			while (string[i] && string[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*ft_putword(char *word, char const *s, int i, int word_len)
{
	int	j;

	j = 0;
	while (word_len > 0)
	{
		word[j] = s[i - word_len];
		j++;
		word_len--;
	}
	word[j] = '\0';
	return (word);
}

static char	**ft_split_words(char const *s, char c, char **str, int nos)
{
	int	i;
	int	word;
	int	word_len;

	i = 0;
	word = 0;
	word_len = 0;
	while (word < nos)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			word_len++;
		}
		str[word] = (char *)malloc(sizeof(char) * (word_len + 1));
		if (str[word] == NULL)
			return (free_array(str, word));
		ft_putword(str[word], s, i, word_len);
		word_len = 0;
		word++;
	}
	str[word] = 0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	nos;
	char			**str;

	if (s == NULL)
		return (NULL);
	nos = ft_count_words(s, c);
	str = (char **)malloc(sizeof(char *) * (nos + 1));
	if (str == NULL)
		return (NULL);
	str = ft_split_words(s, c, str, nos);
	return (str);
}

/*
int main()
{
	char a[] = "This.is.test.data";
	char c = '.';
	char **res;
	
	res = ft_split(a, c);
	if (res != NULL)
	{
		int i = 0;
		while (res[i] != NULL)
		{
			printf ("%s\n", res[i]);
			i++;
		}
	}
	return (0);
}*/
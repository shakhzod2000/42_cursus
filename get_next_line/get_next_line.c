/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshermat <sshermat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:13:47 by sshermat          #+#    #+#             */
/*   Updated: 2023/06/21 20:43:42 by sshermat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*rest_of_line(char *line)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	while (line[i] && line[i] != '\n')
		i++;
	if (!line[i])
	{
		free(line);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(line) - i + 1));
	if (!str)
		return (NULL);
	i++;
	j = 0;
	while (line[i])
		str[j++] = line[i++];
	str[j] = '\0';
	free(line);
	return (str);
}

char	*ft_first_line(char *line)
{
	char	*str;
	int		i;

	i = 0;
	while (line[i] && line[i] != '\n')
		i++;
	str = (char *)malloc(i + 2);
	if (!str)
		return (NULL);
	i = 0;
	while (line[i] && line[i] != '\n')
	{
		str[i] = line[i];
		i++;
	}
	if (line[i] == '\n')
	{
		str[i] = line[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*check_line(char *line)
{
	if (!line)
	{
		line = (char *)malloc(sizeof(char) * 1);
		line[0] = '\0';
	}
	return (line);
}

char	*join_line(int fd, char *line)
{
	char	*buf;
	ssize_t	bytes_read;

	line = check_line(line);
	buf = (char *)malloc(BUFFER_SIZE + 1);
	if (!buf)
		return (NULL);
	bytes_read = 1;
	while (!ft_strchr(line, '\n') && bytes_read > 0)
	{
		bytes_read = read(fd, buf, BUFFER_SIZE);
		if (bytes_read == -1 || (line[0] == '\0' && bytes_read == 0))
		{
			free(buf);
			free(line);
			return (NULL);
		}
		buf[bytes_read] = '\0';
		line = ft_strjoin(line, buf);
	}
	free(buf);
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*line;
	char		*first_line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = join_line(fd, line);
	if (!line)
		return (NULL);
	first_line = ft_first_line(line);
	line = rest_of_line(line);
	return (first_line);
}

int	main(void)
{
	char	*line;
	int		fd;
	int		n;

	line = NULL;
	fd = open("mufti_menk.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("Couldn't open the file.");
		return (1);
	}
	n = 5;
	while (n > 0)
	{
		line = get_next_line(fd);
		printf("%s\n", line);
		free(line);
		n--;
	}
	close(fd);
	return (0);
} 

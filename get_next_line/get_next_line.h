/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshermat <sshermat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 22:15:27 by sshermat          #+#    #+#             */
/*   Updated: 2023/06/21 19:00:28 by sshermat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif
# include <fcntl.h>  //for 'open' and fd flags like 'O_RDONLY' (read-only mode)
# include <stddef.h> //for 'ssize_t'
# include <stdio.h>
# include <stdlib.h> //for 'malloc'
# include <unistd.h> //for 'read' and 'close' functions

char	*get_next_line(int fd);
char	*join_line(int fd, char *line);
char	*ft_first_line(char *line);
char	*rest_of_line(char *line);
char	*ft_strjoin(char *line, char *buf);
char	*ft_strchr(char *s, int c);
size_t	ft_strlen(char *str);

#endif
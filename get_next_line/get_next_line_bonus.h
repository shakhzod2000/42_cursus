/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshermat <sshermat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 16:30:22 by sshermat          #+#    #+#             */
/*   Updated: 2023/06/21 19:51:15 by sshermat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif
# define MAX_FD 1024
# include <fcntl.h> //for 'open' and fd flags like 'O_RDONLY' (read-only mode)
# include <limits.h>
//for providing constants to sizes and limits (e.g. INT_MAX, INT_MIN)
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
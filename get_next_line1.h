/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha <krocha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 01:17:17 by krocha            #+#    #+#             */
/*   Updated: 2023/06/15 12:49:49 by krocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/* LIBRARIES */

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

/* BUFFER SIZE */

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

/****** PROTOTYPES ******/

/* GET_NEXT_LINE */
char	*get_next_line(int fd);

/* GET_NEXT_LINE_UTILS */
size_t	ft_strlen(char *str);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_readline(int fd, char *str);
char	*ft_get_first_line(char *str);
char	*ft_get_last_part(char *str);
char	*ft_strchr(char *str, int c);

#endif
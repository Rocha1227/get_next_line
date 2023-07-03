/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha <krocha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 22:54:26 by krocha            #+#    #+#             */
/*   Updated: 2023/07/03 15:21:13 by krocha           ###   ########.fr       */
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
char	*ft_strchr(char *str, int c);
char	*ft_strjoin (char *str1, char *str2);
char	*read_file(char *str, int fd);
char	*ft_get_line(char *str);
char	*ft_next_line(char *str);
void	*ft_calloc(size_t nmemb, size_t size);
#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha <krocha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 15:15:38 by krocha            #+#    #+#             */
/*   Updated: 2023/06/17 16:44:25 by krocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/* LIBRARIES */

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

/* BUFFER_SIZE*/

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

/* GET_NEXT_LINE PROTOTYPE*/

char	*get_next_line(int fd);

/* UTILS PROTOTYPES */

size_t	ft_strlen(char *c);
char	*ft_strchr(char *str, int c);
char	*ft_strjoin(char *str1, char *str2);
char	*readline(char *str, int fd);
char	*get_other_lines(char *str);
char	*get_first_line(char *str);

#endif
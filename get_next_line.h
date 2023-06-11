/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha <krocha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 01:17:17 by krocha            #+#    #+#             */
/*   Updated: 2023/06/11 02:14:26 by krocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/* LIBRARIES */

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

/****** PROTOTYPES ******/

/* GET_NEXT_LINE */
char	*get_next_line(int fd);

/* GET_NEXT_LINE_UTILS */
int		ft_strlen(char *str);
size_t	ft_lnlen(char *str);
char	ft_strjoin(char *s1, char *s2);




#endif
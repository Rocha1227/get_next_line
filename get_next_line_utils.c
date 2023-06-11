/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha <krocha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 01:17:30 by krocha            #+#    #+#             */
/*   Updated: 2023/06/11 02:44:04 by krocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_lnlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0' || str[i] != '\n')
	{
		i++;
	}
	return (i);
}

char	ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	if (!s1)
		s1 = (char *)malloc(sizeof(char));
		s1[0] = '\0';
	if (!s1 || !s2)
		return (NULL);
	str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	while (s1[i++] != '\0')
	{
		str[i] = s1[i];
	}
	while (s2[j++] != '\0')
	{
		str[i + j] = s2[j];
	}
	str[i + j] = '\0';
	return (str[i + j]);
}

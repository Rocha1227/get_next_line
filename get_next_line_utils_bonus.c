/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha <krocha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 22:55:46 by krocha            #+#    #+#             */
/*   Updated: 2023/07/05 23:31:38 by krocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(char *str, int c)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	if (c == '\0')
		return ((char *)&str[ft_strlen(str)]);
	while (str[i] != '\0')
	{
		if (str[i] == (char) c)
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *str1, char *str2)
{
	size_t	i;
	size_t	a;
	char	*s;

	if (!str1)
	{
		str1 = malloc(sizeof(char));
		str1[0] = '\0';
	}
	if (!str1 || !str2)
		return (NULL);
	s = malloc(sizeof(char) * ((ft_strlen(str1) + ft_strlen(str2)) + 1));
	if (!s)
		return (NULL);
	i = -1;
	a = 0;
	if (str1)
		while (str1[++i] != '\0')
			s[i] = str1[i];
	while (str2[a] != '\0')
		s[i++] = str2[a++];
	s[ft_strlen(str1) + ft_strlen(str2)] = '\0';
	free(str1);
	return (s);
}

char	*ft_get_line(char *str)
{
	int		i;
	char	*s;

	i = 0;
	if (!str[i])
		return (NULL);
	while (str[i] && str[i] != '\n')
		i++;
	s = malloc(sizeof(char) * (i + 2));
	if (!s)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		s[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

char	*ft_next_line(char *str)
{
	int		i;
	char	*s;
	int		a;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i])
	{
		free(str);
		return (NULL);
	}
	s = malloc(sizeof(char) * (ft_strlen(str) - i + 1));
	if (!s)
		return (NULL);
	i++;
	a = 0;
	while (str[i])
		s[a++] = str[i++];
	s[a] = '\0';
	free(str);
	return (s);
}

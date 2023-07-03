/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha <krocha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 22:55:46 by krocha            #+#    #+#             */
/*   Updated: 2023/07/03 15:35:39 by krocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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

char	*ft_strjoin (char *str1, char *str2)
{
	size_t	i;
	size_t	a;
	char	*s;

	if (!str1)
	{
		str1 = (char *)malloc(sizeof(char) * 1);
		str1[0] = '\0';
	}
	if (!str1 || !str2)
		return (NULL);
	s = ft_calloc(((ft_strlen(str1) + ft_strlen(str2)) + 1), sizeof(char));
	if (!s)
		return (NULL);
	i = 0;
	a = 0;
	if (str1)
		while (str1[i++] != '\0')
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
	s = ft_calloc((i + 2),sizeof(char));
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
	s = ft_calloc((ft_strlen(str) - i + 1), sizeof(char));
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
void	*ft_calloc(size_t memsize, size_t size)
{
	char	*ptr;
	int		i;
	int		n;

	i = 0;
	n = memsize * size;
	ptr = malloc(memsize * size);
	if (!ptr)
		return (NULL);
	while (n-- > 0)
		ptr[i++] = '\0';
	return (ptr);
}
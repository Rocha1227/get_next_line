/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha <krocha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 01:17:27 by krocha            #+#    #+#             */
/*   Updated: 2023/06/15 12:46:09 by krocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*store;
	char		*new;

	store = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	store = ft_readline(fd, store);
	if (!store)
		return (NULL);
	new = ft_get_first_line(store);
	store = ft_get_last_part(store);
	return (new);
}

char	*ft_readline(int fd, char *str)
{
	char	*buf;
	int		bytes;

	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	bytes = 1;
	while (!ft_strchr(str, '\n') && (bytes != 0))
	{
		bytes = read(fd, buf, BUFFER_SIZE);
		if (bytes == -1)
		{
			free(buf);
			return (NULL);
		}
		buf[bytes] = '\0';
		str = ft_strjoin(str, buf);
	}
	free(buf);
	return (str);
}

char	*ft_get_first_line(char *str)
{
	int		i;
	int		j;
	char	*s;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i] != '\0' && str[i] != '\n')
		i++;
	s = malloc(sizeof(char) * (i + 2));
	j = 0;
	if (!s)
		return (NULL);
	while (str[j] != '\0' && str[j] != '\n')
	{
		s[j] = str[j];
		j++;
	}
	if (s[j] == '\n')
	{
		s[j] = '\n';
		j++;
	}
	s[j] = '\0';
	return (s);
}

char	*ft_get_last_part(char *str)
{
	int		i;
	int		a;
	char	*s;

	i = 0;
	while (str[i] != '\0' && str[i] != '\n')
		i++;
	if (!str)
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
	{
		s[a++] = str[i++];
	}
	s[a] = '\0';
	free(str);
	return (s);
}

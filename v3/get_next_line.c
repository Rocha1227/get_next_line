/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha <krocha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 22:53:32 by krocha            #+#    #+#             */
/*   Updated: 2023/07/03 13:58:14 by krocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_file(char *str, int fd)
{
	int		bytes;
	char	*buf;

	buf = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buf)
		return (NULL);
	bytes = 1;
	while (!ft_strchr(str, '\n') && bytes != 0)
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

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	stash = read_file(stash, fd);
	if (!stash)
		return (NULL);
	line = ft_get_line(stash);
	stash = ft_next_line(stash);
	return (line);
}

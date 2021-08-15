/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 23:37:11 by agaliste          #+#    #+#             */
/*   Updated: 2021/08/15 19:32:14 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;
	char			*dstn;
	const char		*srcn;

	i = 0;
	dstn = dst;
	srcn = src;
	if (!dstn && !srcn)
		return (NULL);
	if (srcn > dstn)
	{
		while (i < len)
		{
			dstn[i] = srcn[i];
			i++;
		}
	}
	else
	{
		i = len;
		while (i-- > 0)
			dstn[i] = srcn[i];
	}
	return (dstn);
}

int	check_buffer(char *pos, char **line)
{
	char	*aux;
	char	*otro;

	aux = ft_strchr(pos, '\n');
	if (aux)
	{
		*aux = '\0';
		otro = *line;
		*line = ft_strjoin(otro, pos);
		free(otro);
		ft_memmove(pos, aux + 1, ft_strlen(aux + 1));
		return (1);
	}
	else
	{
		otro = *line;
		*line = ft_strjoin(otro, pos);
		free(otro);
		pos[0] = '\0';
		return (0);
	}
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	pos[256][BUFFER_SIZE + 1];
	int			rd;

	if (!fd || BUFFER_SIZE <= 0)
		return (NULL);
	line = ft_strdup("");
	if (check_buffer(pos[fd], &line))
		return (line);
	rd = read(fd, pos[fd], BUFFER_SIZE);
	while (rd)
	{
		if (check_buffer(pos[fd], &line))
			return (line);
		rd = read(fd, pos[fd], BUFFER_SIZE);
	}
	return (NULL);
}

int	main(void)
{
	char	*linea;
	int		fd;

	fd = open("/Users/agaliste/42-Cursus/C/get_next_line/test.txt", O_RDONLY);
	linea = get_next_line(fd);
	printf("Linea 1: %s\n", linea);
	free(linea);
	linea = get_next_line(fd);
	printf("Linea 2: %s\n", linea);
	free(linea);
	linea = get_next_line(fd);
	printf("Linea 3: %s\n", linea);
	free(linea);
	system("leaks a.out");
	pause();
	close(fd);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 23:37:11 by agaliste          #+#    #+#             */
/*   Updated: 2021/08/29 04:35:50 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	check_buffer(char *pos, char **line, int fd)
{
	char	*aux;
	char	*otro;
	char	aux2[256][BUFFER_SIZE + 1];

	aux = ft_strchr(pos, '\n');
	if (aux)
	{
		*aux = '\0';
		otro = *line;
		*line = ft_strjoin(otro, pos);
		free(otro);
		ft_memcpy(aux2[fd], aux + 1, ft_strlen(aux + 1));
		ft_bzero(pos, BUFFER_SIZE + 1);
		ft_memcpy(pos, aux2[fd], ft_strlen(aux2[fd]));
		ft_bzero(aux2[fd], BUFFER_SIZE + 1);
		return (1);
	}
	else
	{
		otro = *line;
		*line = ft_strjoin(otro, pos);
		free(otro);
		ft_bzero(pos, BUFFER_SIZE + 1);
		return (0);
	}
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	pos[256][BUFFER_SIZE + 1];
	int			rd;
	int			i;

	i = 0;
	line = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (fd < 0 || fd > 256 || BUFFER_SIZE <= 0 || !line)
		return (NULL);
	ft_bzero(line, BUFFER_SIZE + 1);
	if (check_buffer(pos[fd], &line, fd))
		return (line);
	rd = read(fd, pos[fd], BUFFER_SIZE);
	while (rd)
	{
		if (check_buffer(pos[fd], &line, fd))
			return (line);
		rd = read(fd, pos[fd], BUFFER_SIZE);
		i++;
	}
	if (line && i > 0)
		return (line);
	free(line);
	return (NULL);
}

int	main(void)
{
	char	*linea;
	int		fd;

	fd = open("test.txt", O_RDONLY);
	linea = get_next_line(fd);
	printf("Linea 1: %s\n", linea);
	free(linea);
	linea = get_next_line(fd);
	printf("Linea 2: %s\n", linea);
	free(linea);
	linea = get_next_line(fd);
	printf("Linea 3: %s\n", linea);
	free(linea);
	// system("leaks a.out");
	close(fd);
	return (0);
}

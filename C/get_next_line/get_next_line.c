/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 23:37:11 by agaliste          #+#    #+#             */
/*   Updated: 2021/08/30 00:10:14 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	check_buffer(char *pos, char **line)
{
	char	*aux;
	char	*otro;
	char	aux2[BUFFER_SIZE + 1];

	aux = ft_strchr(pos, '\n');
	otro = *line;
	if (aux)
	{
		*aux = '\0';
		*line = ft_strjoin(otro, pos);
		free(otro);
		ft_memcpy(aux2, aux + 1, ft_strlen(aux + 1));
		ft_bzero(pos, BUFFER_SIZE + 1);
		ft_memcpy(pos, aux2, ft_strlen(aux2));
		ft_bzero(aux2, BUFFER_SIZE + 1);
		otro = *line;
		*line = ft_strjoin(otro, "\n");
		free(otro);
		return (1);
	}
	*line = ft_strjoin(otro, pos);
	free(otro);
	ft_bzero(pos, BUFFER_SIZE + 1);
	return (0);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	pos[256][BUFFER_SIZE + 1];
	int			rd;

	line = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (fd < 0 || fd > 256 || BUFFER_SIZE <= 0 || !line)
		return (NULL);
	ft_bzero(line, BUFFER_SIZE + 1);
	if (check_buffer(pos[fd], &line))
		return (line);
	rd = read(fd, pos[fd], BUFFER_SIZE);
	while (rd)
	{
		if (check_buffer(pos[fd], &line))
			return (line);
		rd = read(fd, pos[fd], BUFFER_SIZE);
	}
	if (line[0] == '\0')
	{
		free(line);
		return (NULL);
	}
	return (line);
}

int	main(void)
{
	char	*linea;
	int		fd;

	fd = open("test", O_RDONLY);
	for (int i = 1; i <= 2; i++)
	{
		linea = get_next_line(fd);
		printf("Linea %d: %s\n", i, linea);
		free(linea);
	}
	// system("leaks a.out");
	close(fd);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 09:03:22 by agaliste          #+#    #+#             */
/*   Updated: 2021/03/15 17:17:17 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

char	*cpy_str(char *pos, char **line, int rd)
{
	int		i;
	char	*help;

	i = 0;
	while (pos[i])
	{
		if (pos[i] == '\n')
			break ;
		i++;
	}
	if (i < ft_strlen(pos))
	{
		*line = ft_substr(pos, 0, i);
		help = ft_substr(pos, i + 1, ft_strlen(pos) + 1);
		free(pos);
		pos = ft_strdup(help);
		free(help);
	}
	if (rd == 0)
	{
		*line = pos;
		pos = NULL;
	}
	return (pos);
}

int	check_str(char *buff, char **pos)
{
	char	*help;

	if (*pos)
	{
		help = ft_strjoin(*pos, buff);
		free(*pos);
		*pos = ft_strdup(help);
		free(help);
	}
	else
		*pos = ft_strdup(buff);
	if (ft_strchr(buff, '\n'))
		return (1);
	return (0);
}

int	final_checks(char **line, char **pos, int fd, int rd)
{
	if (rd <= 0 && !pos[fd])
	{
		*line = ft_strdup("");
		return (rd);
	}
	pos[fd] = cpy_str(pos[fd], line, rd);
	if (rd <= 0 && !pos[fd])
		return (rd);
	return (1);
}

int	get_next_line(int fd, char **line)
{
	char		*buff;
	static char	*pos[256];
	int			rd;

	buff = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (BUFFER_SIZE <= 0 || !fd || !line || !buff)
		return (-1);
	rd = read(fd, buff, BUFFER_SIZE);
	while (rd)
	{
		if (rd == -1)
		{
			free(buff);
			return (-1);
		}
		buff[rd] = '\0';
		if (check_str(buff, &pos[fd]))
			break ;
		rd = read(fd, buff, BUFFER_SIZE);
	}
	free(buff);
	return (final_checks(line, pos, fd, rd));
}

int	main(void) //Main for testing
{
	int		fd;
	int		ret;
	char	*line;

	line = malloc(sizeof(char*));
	fd = open("/Users/agaliste/Documents/Programming/42-Cursus/C/get_next_line/test.txt", O_RDONLY);
	while((ret = get_next_line(fd, &line)) > 0)
		printf("Line: %s\n", line);
	return (0);
}

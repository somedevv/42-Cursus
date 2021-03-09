/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 09:03:22 by agaliste          #+#    #+#             */
/*   Updated: 2021/03/09 17:50:57 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	get_next_line(int fd, char **line)
{
	static char	buff[BUFFER_SIZE + 1];
	int			rd;

	while ((rd = read(fd, buff, BUFFER_SIZE)) >= 0)
	{
		buff[rd] = '\0';
		ft_strjoin(*line, buff);
		// ft_bzero(ft_strchr(*line, '\n'), ft_strlen(ft_strchr(*line, '\n')));
	}
	if (rd == -1)
		return (-1);
	else
		return (0);
}

int	main(void)
{
	int		fd;
	char	*line;

	line = malloc(sizeof(char*));
	fd = open("/Users/agaliste/42-Cursus/C/get_next_line/test.txt", O_RDONLY);
	while (get_next_line(fd, &line))
	{
		printf("Line: %s", line);
	}
	/*
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", line[i][j]);
			if (j == 2)
				printf("\n");
		}
	}
	*/
	return (0);
}

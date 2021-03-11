/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 09:03:22 by agaliste          #+#    #+#             */
/*   Updated: 2021/03/11 13:34:49 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	get_next_line(int fd, char **line)
{
	
}

int	main(void) //Main for testing
{
	int		fd;
	char	*line;

	line = malloc(sizeof(char*));
	fd = open("/Users/agaliste/42-Cursus/C/get_next_line/test.txt", O_RDONLY);
	/*
	while (get_next_line(fd, &line))
		printf("Line: %s", line);
	*/
	return (0);
}

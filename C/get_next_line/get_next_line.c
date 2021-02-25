/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 09:03:22 by agaliste          #+#    #+#             */
/*   Updated: 2021/02/25 18:28:17 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int get_next_line(int fd, char **line) {
	static char *buff;

	buff = malloc(sizeof(char*));
	if (!(buff = malloc(sizeof(char*))))
		return (-1);
	if (strlen(&buff) < 1)
		if (read(fd, &buff,BUFFER_SIZE) < 0)
			return (-1);	
		else
			
}

int	main() {
	int fd = open("./test.txt", O_RDONLY);
	char **line;
	get_next_line(fd, &line);
	return 0;
}

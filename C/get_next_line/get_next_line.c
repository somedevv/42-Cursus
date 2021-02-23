/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 09:03:22 by agaliste          #+#    #+#             */
/*   Updated: 2021/02/23 19:13:33 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int get_next_line(int fd) {
	static char *buff;
	int			rd;
	while ((rd = read(fd, &buff, BUFFER_SIZE)) == BUFFER_SIZE){
		printf("%s", &buff);
		if (rd == 0 || rd == -1)
			break ;
	}
	close(fd);
	return 0;
}

int	main() {
	int fd = open("./test.txt", O_RDONLY);
	get_next_line(fd);
	return 0;
}

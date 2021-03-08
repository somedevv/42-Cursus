/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 09:03:22 by agaliste          #+#    #+#             */
/*   Updated: 2021/03/08 19:17:16 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int get_next_line(int fd, char **line) {
	static char buff[BUFFER_SIZE + 1];
	int			rd;

	while ((rd = read(fd, &buff,BUFFER_SIZE)) >= 0)
	{
		buff[rd] = 0;
		ft_strjoin(*line, buff);
		ft_bzero(ft_strchr(*line, '\n'), ft_strlen(ft_strchr(*line, '\n')));
		//return (1);
	}
	if (rd == -1)
		return(-1);
	else
		return (0);
}

int	main() {
	int fd = open("./test.txt", O_RDONLY);
	char **line;

	if (!(line = malloc(sizeof(char **))))
		return (-1);
	get_next_line(fd, line);
   	for(int i=0; i<2; i++) {
      	for(int j=0;j<3;j++) {
        	 printf("%d ", line[i][j]);
        	 if(j==2){
            	printf("\n");
        	 }
      	}
   	}
   return 0;
}

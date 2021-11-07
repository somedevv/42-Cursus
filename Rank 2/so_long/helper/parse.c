/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 22:09:49 by agaliste          #+#    #+#             */
/*   Updated: 2021/11/07 20:50:35 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../solong.h"

void	parseinput(const int argc, const char *argv)
{
	char	*tmp;

	if (argc > 2)
		exit(printerror("Only one argument is valid\n"));
	if (argc < 2)
		exit(printerror("Please provide a .ber map file as argument\n"));
	tmp = ft_strnstr(ft_strrchr(argv, '.'), ".ber", 4);
	if (tmp && ft_strlen(tmp) == 4)
		return ;
	else
		exit(printerror("Only .ber map file accepted as argument\n"));
}

char	**parsemap(int fd)
{
	char	*line;
	char	**map;
	int		i;
	int 	len;

	if (!fd || fd < 0)
		exit(printerror("File non existant\n"));
	i = 1;
	line = get_next_line(fd);
	len = ft_strnolen(line);
	if (line[0] == '\n')
		exit(1);
	map = ft_calloc(1, sizeof(char*) * len);
	map[0] = line;
	while (line)
	{
		line = get_next_line(fd);
		map = (char**) ft_realloc(map, sizeof(char*) * len * i);
		map[i++] = line;
	}
	return (map);
}

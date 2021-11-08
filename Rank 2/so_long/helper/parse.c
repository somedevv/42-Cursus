/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 22:09:49 by agaliste          #+#    #+#             */
/*   Updated: 2021/11/08 11:04:20 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../solong.h"

void	parseinput(const int argc, const char *argv)
{
	char	*tmp;

	if (argc > 2)
		exit(printerror("Arg eror: Only one argument is valid\n"));
	if (argc < 2)
		exit(printerror("Arg error: Please provide a .ber map file\n"));
	tmp = ft_strnstr(ft_strrchr(argv, '.'), ".ber", 4);
	if (tmp && ft_strlen(tmp) == 4)
		return ;
	else
		exit(printerror("Arg error: Only .ber map file accepted\n"));
}

char	**parsemap(int fd)
{
	char	**map;
	char	*line;
	int		i;
	int		len;

	i = 1;
	line = get_next_line(fd);
	if (!line || line[0] != '1')
		exit(1);
	len = ft_strnllen(line);
	map = ft_calloc(1, sizeof(char *) * len);
	map[0] = line;
	while (line)
	{
		line = get_next_line(fd);
		map = (char **) ft_realloc(map, sizeof(char *) * len * i);
		map[i++] = line;
	}
	return (map);
}

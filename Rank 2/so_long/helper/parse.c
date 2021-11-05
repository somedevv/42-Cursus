/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 22:09:49 by agaliste          #+#    #+#             */
/*   Updated: 2021/11/05 22:09:55 by agaliste         ###   ########.fr       */
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

void	parsemap(int fd)
{
	char *line;
	int call;
	
	if (!fd|| fd < 0)
		exit(printerror("File non existant\n"));
	call = 0;
	line = get_next_line(fd);
	while (line != NULL)
	{
		call++;
		checkmapcontent(line, call);
		line = get_next_line(fd);
	}
	write(1, "GOOD\n", 6);
}

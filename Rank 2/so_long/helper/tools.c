/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 02:18:36 by agaliste          #+#    #+#             */
/*   Updated: 2021/11/07 04:13:05 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../solong.h"

int	printerror(char *error)
{
	write(1, "Error\n", 7);
	write(1, error, ft_strlen(error));
	return (1);
}

void	printmap(char **map)
{
	int i;
	int j;

	i = -1;
	if (!map)
		exit(1);
	while (map[++i])
	{
		j = -1;
		while (map[i][++j])
			write(1, &map[i][j], 1);
	}
}

int	prgclose(int keycode, t_data *vars)
{
	(void)keycode;
	(void)vars;
	exit(0);
}

unsigned long int	getleny(char **str)
{
	int i = -1;
	while (str[++i] != NULL);
	return i + 1;
}

void	modifymap(t_data *img, int i)
{
	char aux;

	if (i == 0 && img->map[img->pos[0] - 1][img->pos[1]] != '1')
	{
		aux = img->map[img->pos[0]][img->pos[1]];
		img->map[img->pos[0]][img->pos[1]] = img->map[img->pos[0] - 1][img->pos[1]];
		img->map[img->pos[0] - 1][img->pos[1]] = aux;
	}
	if (i == 1 && img->map[img->pos[0] + 1][img->pos[1]] != '1')
	{
		aux = img->map[img->pos[0]][img->pos[1]];
		img->map[img->pos[0]][img->pos[1]] = img->map[img->pos[0] + 1][img->pos[1]];
		img->map[img->pos[0] + 1][img->pos[1]] = aux;
	}
	if (i == 2 && img->map[img->pos[0]][img->pos[1] - 1] != '1')
	{
		aux = img->map[img->pos[0]][img->pos[1]];
		img->map[img->pos[0]][img->pos[1]] = img->map[img->pos[0]][img->pos[1] - 1];
		img->map[img->pos[0]][img->pos[1] - 1] = aux;
	}
	if (i == 3 && img->map[img->pos[0]][img->pos[1] + 1] != '1')
	{
		aux = img->map[img->pos[0]][img->pos[1]];
		img->map[img->pos[0]][img->pos[1]] = img->map[img->pos[0]][img->pos[1] + 1];
		img->map[img->pos[0]][img->pos[1] + 1] = aux;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkmap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:11:55 by agaliste          #+#    #+#             */
/*   Updated: 2021/11/08 10:27:39 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../solong.h"

static void	checkborder(char line)
{
	if (line != '1')
		exit(printerror("Map error: Invalid map borders\n"));
}

static void	checkelemnts(char **line, t_data *img)
{
	size_t	i;
	size_t	j;
	int	eocur;
	int	pocur;

	i = -1;
	eocur = 0;
	pocur = 0;
	while (line[++i])
	{
		j = -1;
		while (line[i][++j] != '\n' && line[i][j] != '\0')
		{
			if (line[i][j] == 'P')
				pocur += 1;
			if (line[i][j] == 'C')
				img->cocur += 1;
			if (line[i][j] == 'E')
				eocur += 1;
		}
	}
	if (!(eocur == 1 && pocur == 1 && img->cocur > 0))
		exit(printerror("Map error: Not enought players, escapes or coins\n"));
}

static void	checkmapcontent2(char **line, t_data *img)
{
	size_t	i;
	size_t	j;
	int	eocur;
	int	pocur;

	i = -1;
	eocur = 0;
	pocur = 0;
	while (line[++i])
	{
		j = -1;
		while (line[i][++j] != '\n' && line[i][j] != '\0')
		{
			if (i == 0 || j == 0 || j == m.x_size || i == m.y_size)
				checkborder(line[i][j]);
			if (!(line[i][j] == 'C' || line[i][j] == 'P' || line[i][j] == '1'
					|| line[i][j] == '0' || line[i][j] == 'E'))
				exit(printerror("Map error: Invalid element on map\n"));
		}
	}
	checkelemnts(line, img);
}

void	checkmapcontent(char **line, t_data *img)
{
	int	eocur;
	int	pocur;

	eocur = 0;
	pocur = 0;
	if (!line || m.x_size == m.y_size
		|| checklinelen())
		exit(printerror("Map error: Invalid map\n"));
	checkmapcontent2(line, img);
}

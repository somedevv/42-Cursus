/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkmap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:11:55 by agaliste          #+#    #+#             */
/*   Updated: 2021/11/07 21:46:22 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../solong.h"

static void	checkborder(char line)
{
	if (line != '1')
		exit(printerror("Map not valid: Invalid map borders\n"));
}

static void	checkelemnts(char **line, t_data *img)
{
	int	i;
	int	j;
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
	if (!(eocur < 2 && eocur > 0) && pocur == 1 && img->cocur > 0)
		exit(printerror("Not enought players, escapes or coins\n"));
}

static void	checkmapcontent2(char **line, int xlen, int ylen, t_data *img)
{
	int	i;
	int	j;
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
			if (i == 0 || j == 0 || j == xlen || i == ylen)
				checkborder(line[i][j]);
			if (!(line[i][j] == 'C' || line[i][j] == 'P' || line[i][j] == '1'
					|| line[i][j] == '0' || line[i][j] == 'E'))
				exit(printerror("Invalid element on map\n"));
		}
	}
	checkelemnts(line, img);
}

void	checkmapcontent(char **line, int ylen, int xlen, t_data *img)
{
	int	eocur;
	int	pocur;

	eocur = 0;
	pocur = 0;
	if (!line || ft_strnolen(line[0]) == getleny(line)
		|| checklinelen(line, xlen, ylen))
		exit(printerror("Map not valid\n"));
	checkmapcontent2(line, xlen, ylen, img);
}

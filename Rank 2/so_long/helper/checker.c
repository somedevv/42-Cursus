/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 23:30:07 by agaliste          #+#    #+#             */
/*   Updated: 2021/11/07 06:08:20 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../solong.h"

void	checkmapcontent(char **line, const int call)
{
	int	i;
	int	j;
	int	len;

	i = -1;
	if (!line)
		exit(printerror("Map not valid\n"));
	while (line[++i])
	{
		len = ft_strlen(line[i]) - 2;
		j = -1;
		while (line[i][++j] != '\n' && line[i][j] != '\0')
		{
			if (i == 0 || j == 0 || j == len || i == call)
			{
				if (line[i][j] != '1')
					exit(printerror("Map not valid: Invalid map borders\n"));
			}
			if (line[i][j] == 'C' || line[i][j] == 'P' || line[i][j] == '1'
				|| line[i][j] == '0' || line[i][j] == 'E')
				continue ;
			else
				exit(printerror("Map not valid\n"));
		}
	}
}

int	checkbujero(t_data img, int i)
{
	if (i == 0 && img.map[img.pos[0] - 1][img.pos[1]] == 'E')
		return (0);
	if (i == 1 && img.map[img.pos[0] + 1][img.pos[1]] == 'E')
		return (0);
	if (i == 2 && img.map[img.pos[0]][img.pos[1] - 1] == 'E')
		return (0);
	if (i == 3 && img.map[img.pos[0]][img.pos[1] + 1] == 'E')
		return (0);
	return (1);
}

void	checkcoin(t_data *img, int i)
{
	if (i == 0 && img->map[img->pos[0] - 1][img->pos[1]] == 'C')
	{
		img->coin = 1;
		img->map[img->pos[0] - 1][img->pos[1]] = '0';
	}
	if (i == 1 && img->map[img->pos[0] + 1][img->pos[1]] == 'C')
	{
		img->coin = 1;
		img->map[img->pos[0] + 1][img->pos[1]] = '0';
	}
	if (i == 2 && img->map[img->pos[0]][img->pos[1] - 1] == 'C')
	{
		img->coin = 1;
		img->map[img->pos[0]][img->pos[1] - 1] = '0';
	}
	if (i == 3 && img->map[img->pos[0]][img->pos[1] + 1] == 'C')
	{
		img->coin = 1;
		img->map[img->pos[0]][img->pos[1] + 1] = '0';
	}
}

int	checkevent(t_data *img, int i)
{
	checkcoin(img, i);
	if (!(checkbujero((*img), i)))
	{
		if (img->coin >= 1)
			exit(1);
		return (0);
	}
	return (1);
}
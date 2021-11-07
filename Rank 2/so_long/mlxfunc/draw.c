/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 03:10:16 by agaliste          #+#    #+#             */
/*   Updated: 2021/11/07 06:09:57 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../solong.h"

void	drawground(t_data *img)
{
	for (unsigned long int i = 0, x = 0; img->map[i]; i++, x += 32)
	{
		for (unsigned long int  j = 0, y = 0; img->map[i][j]; j++, y += 32)
		{
			if (img->map[i][j] == '1')
			{
				img->path = "./imgs/grass.xpm";
				img->img = mlx_xpm_file_to_image(img->mlx, img->path, &img->width, &img->height);
				mlx_put_image_to_window(img->mlx, img->win, img->img, y, x);
			}
			else
			{
				img->path = "./imgs/dirt.xpm";
				img->img = mlx_xpm_file_to_image(img->mlx, img->path, &img->width, &img->height);
				mlx_put_image_to_window(img->mlx, img->win, img->img, y, x);
			}
			if (img->map[i][j] == 'P')
			{
				img->pos[0] = i;
				img->pos[1] = j;
			}
		}
	}
}

void	drawelse(t_data img)
{
	for (unsigned long int i = 0, x = 0; img.map[i]; i++, x += 32)
	{
		for (unsigned long int  j = 0, y = 0; img.map[i][j]; j++, y += 32)
		{
			if (img.map[i][j] == '1')
			{
				img.path = "./imgs/tree.xpm";
				img.img = mlx_xpm_file_to_image(img.mlx, img.path, &img.width, &img.height);
				mlx_put_image_to_window(img.mlx, img.win, img.img, y, x);
			}
			if (img.map[i][j] == 'P')
			{
				img.path = "./imgs/charac.xpm";
				img.img = mlx_xpm_file_to_image(img.mlx, img.path, &img.width, &img.height);
				mlx_put_image_to_window(img.mlx, img.win, img.img, y, x);
			}
			if (img.map[i][j] == 'C')
			{
				img.path = "./imgs/collec.xpm";
				img.img = mlx_xpm_file_to_image(img.mlx, img.path, &img.width, &img.height);
				mlx_put_image_to_window(img.mlx, img.win, img.img, y, x);
			}
			if (img.map[i][j] == 'E')
			{
				img.path = "./imgs/exit.xpm";
				img.img = mlx_xpm_file_to_image(img.mlx, img.path, &img.width, &img.height);
				mlx_put_image_to_window(img.mlx, img.win, img.img, y, x);
			}
		}
	}
}
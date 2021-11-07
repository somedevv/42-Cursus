/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 03:35:03 by agaliste          #+#    #+#             */
/*   Updated: 2021/11/07 04:56:22 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../solong.h"

void	moveup(t_data *img)
{
	if (!checkevent(img, 0))
		return ;
	mlx_clear_window(img->mlx, img->win);
	drawground(img);
	modifymap(img, 0); // arriba
	drawelse((*img));
}

void	movedown(t_data *img)
{
	if (!checkevent(img, 1))
		return ;
	mlx_clear_window(img->mlx, img->win);
	modifymap(img, 1);
	drawground(img);
	drawelse((*img));
}

void	moveleft(t_data *img)
{
	if (!checkevent(img, 2))
		return ;
	mlx_clear_window(img->mlx, img->win);
	modifymap(img, 2); // izq
	drawground(img);
	drawelse((*img));
}

void	moveright(t_data *img)
{
	if (!checkevent(img, 3))
		return ;
	mlx_clear_window(img->mlx, img->win);
	modifymap(img, 3); // drc
	drawground(img);
	drawelse((*img));
}

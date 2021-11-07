/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 23:06:04 by agaliste          #+#    #+#             */
/*   Updated: 2021/11/07 04:12:08 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../solong.h"

int	key_hook(int keycode, void *var)
{
	t_data *img;

	img = (t_data*)var;
	if (keycode == 53)
		exit(1);
	if (keycode == 13)
		moveup(img);
	if (keycode == 1)
		movedown(img);
	if (keycode == 0)
		moveleft(img);
	if (keycode == 2)
		moveright(img);
	printf("key_hook: %d\n", keycode);
	return 0;
}

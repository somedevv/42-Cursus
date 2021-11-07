/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 01:48:37 by agaliste          #+#    #+#             */
/*   Updated: 2021/11/07 06:14:05 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

int	main(int argc, char **argv)
{
	t_data img;
	int	fd;

	parseinput(argc, argv[1]);
	fd = open(argv[1], O_RDONLY);
	img.map = parsemap(fd);
	printmap(img.map);
	img.mlx = mlx_init();
	img.win = mlx_new_window(img.mlx, 30 * ft_strlen(img.map[0]), 27 * getleny(img.map), "Best espanita chaval");
	drawground(&img);
	drawelse(img);
	mlx_key_hook(img.win, key_hook, &img);
	mlx_hook(img.win, 17, 0L, prgclose, &img);
	mlx_loop(img.mlx);
	exit(close(fd));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 01:48:37 by agaliste          #+#    #+#             */
/*   Updated: 2021/11/08 11:05:03 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

int	main(int argc, char **argv)
{
	t_data	img;
	int		fd;

	parseinput(argc, argv[1]);
	fd = open(argv[1], O_RDONLY);
	img.map = parsemap(fd);
	close(fd);
	m.y_size = getleny(img.map);
	m.x_size = ft_strnllen(img.map[0]);
	if (m.y_size < 2)
		exit(printerror("Map error: Invalid map"));
	img.coin = 0;
	img.cocur = 0;
	checkmapcontent(img.map, &img);
	printmap(img.map);
	img.moves = 0;
	img.mlx = mlx_init();
	img.win = mlx_new_window(img.mlx, 32 * m.x_size,
			32 * (m.y_size - 1), "so_long");
	draw(&img, 0);
	mlx_key_hook(img.win, key_hook, &img);
	mlx_hook(img.win, 17, 0L, prgclose, &img);
	mlx_loop(img.mlx);
	exit(0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 01:48:37 by agaliste          #+#    #+#             */
/*   Updated: 2021/11/07 20:24:07 by agaliste         ###   ########.fr       */
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
	if (getleny(img.map) < 2)
		exit(printerror("Invalid map"));
	checkmapcontent(img.map, getleny(img.map), ft_strlen(img.map[0]) - 2);
	printmap(img.map);
	img.coin = 0;
	img.moves = 0;
	img.mlx = mlx_init();
	img.win = mlx_new_window(img.mlx, 32 * (ft_strlen(img.map[0]) - 1),
			32 * (getleny(img.map) - 1), "so_long");
	draw(&img, 0);
	mlx_key_hook(img.win, key_hook, &img);
	mlx_hook(img.win, 17, 0L, prgclose, &img);
	mlx_loop(img.mlx);
	exit(0);
}

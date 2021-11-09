/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 01:48:37 by agaliste          #+#    #+#             */
/*   Updated: 2021/11/09 16:31:18 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

static void	checkgnl(int fd)
{
	char	*line;
	int		len;

	if (!fd || fd < 0 || fd > 256)
		printerror("Map error: Map does not exist");
	line = get_next_line(fd);
	if (!line)
		printerror("Map error: Empty map");
	len = 0;
	while (line)
	{
		line = get_next_line(fd);
		len++;
	}
	if (len < 3)
		printerror("Map error: Invalid map");
}

void	leaks()
{
	system("leaks so_long");
}

int	main(int argc, char **argv)
{
	t_data	img;
	int		fd;

	atexit(leaks);
	img.coin = 0;
	img.cocur = 0;
	img.moves = 0;
	parseinput(argc, argv[1]);
	fd = open(argv[1], O_RDONLY);
	checkgnl(fd);
	close(fd);
	fd = open(argv[1], O_RDONLY);
	img.map = parsemap(fd);
	close(fd);
	img.y_size = getleny(img.map);
	img.x_size = ft_strnllen(img.map[0]);
	checkmapcontent(img.map, &img);
	printmap(img.map);
	img.mlx = mlx_init();
	img.win = mlx_new_window(img.mlx, 32 * img.x_size, 32 * img.y_size,
			"Er so long mu largo");
	draw(&img, 0);
	mlx_key_hook(img.win, key_hook, &img);
	mlx_hook(img.win, 17, 0L, prgclose, &img);
	mlx_loop(img.mlx);
	exit(0);
}

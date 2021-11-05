/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 01:48:37 by agaliste          #+#    #+#             */
/*   Updated: 2021/11/05 21:19:43 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

int	main(int argc, char **argv)
{
	int fd;

	parseinput(argc, argv[1]);
	fd = open(argv[1], O_RDONLY);
	parsemap(fd);
	close(fd);
	exit(0);
}

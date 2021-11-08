/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 02:18:36 by agaliste          #+#    #+#             */
/*   Updated: 2021/11/08 11:03:55 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../solong.h"

int	printerror(char *error)
{
	write(1, "Error\n", 7);
	write(1, error, ft_strlen(error));
	return (1);
}

void	printmap(char **map)
{
	int	i;
	int	j;

	i = -1;
	if (!map)
		exit(1);
	while (map[++i])
	{
		j = -1;
		while (map[i][++j])
			write(1, &map[i][j], 1);
	}
	write(1, "\n", 1);
}

int	prgclose(int keycode, void *vars)
{
	t_data	*img;

	(void)keycode;
	img = (t_data*)vars;
	exit(0);
}

size_t	getleny(char **str)
{
	int	i;

	i = 0;
	if (!str)
		exit(1);
	while (str[i] != NULL)
		i++;
	return (i + 1);
}

size_t	ft_strnolen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n')
		i++;
	return (i);
}

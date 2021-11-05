/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 23:30:07 by agaliste          #+#    #+#             */
/*   Updated: 2021/11/05 23:32:55 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

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
			if (i == 0 || j == 0 || j == len || i == call - 1)
			{
				if (line[i][j] != '1')
					exit(printerror("Map not valid: Invalid map borders on\n"));
			}
			if (line[i][j] == 'C' || line[i][j] == 'P' || line[i][j] == '1'
				|| line[i][j] == '0' || line[i][j] == 'E')
				continue ;
			else
				exit(printerror("Map not valid\n"));
		}
	}
}

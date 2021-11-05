/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 02:18:36 by agaliste          #+#    #+#             */
/*   Updated: 2021/11/05 22:00:37 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../solong.h"

int	printerror(char *error)
{
	write(1, "Error\n", 7);
	write(1, error, ft_strlen(error));
	return (1);
}

void	checkmapcontent(const char *line, const int call)
{
	int i;

	i = -1;
	if (!line)
		exit(printerror("Map not valid\n"));
	while(line[++i] != '\n' && line[i] != '\0')
	{
		if (call == 1 || i == 0 || line[i + 1] == '\n' || line[i + 1] == '\0')
		{
			if (line[i] != '1')
				exit(printerror("Map not valid: Invalid map borders\n"));
		}
		if (line[i] == 'C' || line[i] == 'P'|| line[i] == '1' || line[i] == '0' 
		|| line[i] == 'E')
			continue;
		else
			exit(printerror("Map not valid\n"));
	}
	return ;
}

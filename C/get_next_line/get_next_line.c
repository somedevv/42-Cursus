/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 09:03:22 by agaliste          #+#    #+#             */
/*   Updated: 2021/08/14 00:08:39 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	if (src > dst)
	{
		while (i < len)
		{
			dst[i] = src[i];
			i++;
		}
	}
	else
	{
		i = len;
		while (i-- > 0)
			dst[i] = src[i];
	}
	return (dst);
}

char		*check_str(char *buff, char **pos)
{
	char	*help;
	char	*aux;

	aux = ft_strchr(*pos, '\n');
	if (aux)
	{
		*aux = '/0';
		help = ft_strdup(*pos);
		ft_memmove(*pos, aux + 1, ft_strlen(aux + 1))
		return(help);
	}
	else
		help = ft_strjoin(*pos, buff);
}

char	*get_next_line(int fd)
{
	char		*buff;
	static char	*pos[256];
	int			rd;
	
	buff = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (BUFFER_SIZE <= 0 | !fd | !buff)
		return(NULL);
	
	if (check_str (buff, &pos[fd]))
		return ();
	rd = read(fd, buff, BUFFER_SIZE);
	while (rd)
	{
		if (rd == -1)
		{
			free(buff);
			return(NULL);
		}
		buff[rd] = '\0';
		if (check_str(buff, &pos[fd]))
			break;
		rd = read(fd, buff, BUFFER_SIZE);
	}
	free(buff);
	return();
}

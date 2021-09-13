/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkstring.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 04:00:44 by agaliste          #+#    #+#             */
/*   Updated: 2021/09/07 04:42:47 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	checkstring(char **argv, int len)
{
	int i;
	int j;
	
	i = 1;
	while(i < len)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] >= ':' || argv[i][j] <= '/')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 08:50:26 by agaliste          #+#    #+#             */
/*   Updated: 2021/10/22 18:20:12 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswp.h"

int	parse(char **str)
{
	int	i;
	int	j;

	i = -1;
	while (str[++i])
	{
		j = -1;
		while (str[i][++j] != '\0')
		{
			if (ft_isalpha(str[i][j]))
			{
				printf("KO! -> Character [%c] in [%s]\n", str[i][j], str[i]);
				return (0);
			}
		}
		if (ft_atoli(str[i]) > 2147483647 || ft_atoli(str[i]) < -2147483648)
		{
			printf("KO! -> Number [%s] too big\n", str[i]);
			return (0);
		}
		j = i;
		while (str[++j])
		{	
			if (ft_atoi(str[i]) == ft_atoi(str[j]))
			{
				printf("KO! -> Found repeated number [%s] | Positions [%i] & [%i]\n", str[i], i, j);
				return (0);
			}
		}
	}
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 02:18:36 by agaliste          #+#    #+#             */
/*   Updated: 2021/11/05 02:40:39 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../solong.h"

void	parseinput(int argc, char *argv)
{
	char *papa;
	if (argc > 2)
	{
		write(1, "Error\n", 7);
		exit(1);
	}
	papa = ft_strnstr(argv, ".ber", ft_strlen(argv));
	if (papa)
	{
		if(ft_strlen(papa) > 4)
		{
			write(1, "Error\n", 7);
			exit(1);
		}
	}
}
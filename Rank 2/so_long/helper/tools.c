/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 02:18:36 by agaliste          #+#    #+#             */
/*   Updated: 2021/11/05 18:07:30 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../solong.h"

void printerror(char *error)
{
	write(1, "Error\n", 7);
	write(1, error, ft_strlen(error));
	exit(1);
}

void	parseinput(const int argc, const char *argv)
{
	char *tmp;
	if (argc > 2)
		printerror("Only one argument is valid\n");
	if (argc < 2)
		printerror("Please provide a .ber map file as argument\n");
	tmp = ft_strnstr(ft_strrchr(tmp, '.'), ".ber", 4);
	if (tmp && ft_strlen(tmp) == 4)
		return ;
	else
		printerror("Only .ber map file accepted as argument\n");
}
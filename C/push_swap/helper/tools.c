/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 21:28:04 by agaliste          #+#    #+#             */
/*   Updated: 2021/10/22 21:30:03 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswp.h"

void printlist(int a)
{
	printf("%i\n", a);
}

void	freestr(char **str)
{
	int	j;

	j = 0;
	while (str[j])
		free(str[++j]);
	free(str);
}

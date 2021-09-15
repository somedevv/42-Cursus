/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 00:00:49 by agaliste          #+#    #+#             */
/*   Updated: 2021/09/15 03:27:05 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswp.h"

int	find_greater(int *arr, int argc)
{
	int	i;
	int	greater;

	i = 1;
	greater = arr[0];
	while (i < argc)
	{
		if (arr[i] > greater)
			greater = arr[i];
		i++;
	}
	return (greater);
}

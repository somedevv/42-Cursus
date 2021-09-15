/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 15:14:57 by agaliste          #+#    #+#             */
/*   Updated: 2021/09/15 03:32:21 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswp.h"

void	pushswp(int argc, int *a, int *b)
{
	if (argc == 2)
		solve_2(a);
	// if (argc == 3)
	// 	solve_3(a);
	b = 0;
}

int	main(int argc, char **argv)
{
	int	*a;
	int	*b;

	a = malloc(sizeof(int) * argc - 1);
	b = malloc(sizeof(int) * argc - 1);
	if (checkstring(argv, argc - 1) != 0 || argc < 2 || !argv || !a || !b)
	{
		freestack(a, b);
		return (1);
	}
	if (initchecks(argv, argc, a, b) == 1)
		return (1);
	pushswp(argc - 1, a, b);
	return (0);
}

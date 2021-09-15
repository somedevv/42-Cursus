/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_5_or_less.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 23:48:20 by agaliste          #+#    #+#             */
/*   Updated: 2021/09/15 03:27:28 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswp.h"

void	solve_2(int *a)
{
	if (a[0] > a[1])
		rotate(a, a, 2, 'a');
}

// void	solve_3(int *a)
// {
// 	int greater;
// 	int moves;
// 	int i = 1;

// 	greater = find_greater(a, 3);
// 	moves = moves_to_bottom(a, greater, 3);
// 	while (i++ <= moves)
// 		reverse_rotate(a, a, 3, 'a');	
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 15:14:57 by agaliste          #+#    #+#             */
/*   Updated: 2021/09/20 20:34:29 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswp.h"

void	printff(void *c)
{
	printf("%s", c);
}

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
	t_list *a;

	a->content = "papa";
	ft_lstadd_back(&a, ft_lstnew("pepe"));
	ft_lstadd_back(&a, ft_lstnew("pipi"));
	rotate(&a);
	ft_lstiter(a, printff);
	return (0);
}

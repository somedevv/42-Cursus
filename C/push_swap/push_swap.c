/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 15:14:57 by agaliste          #+#    #+#             */
/*   Updated: 2021/09/22 12:14:33 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswp.h"

void	testprint(void *c)
{
	printf("%s", c);
}

int	main(int argc, char **argv)
{
	t_list *a;
	t_list *b;

	a = ft_lstnew(ft_atoi(argv[1]));
	for (int i = 2; i < argc; i++)
		ft_lstadd_back(&a, ft_lstnew(ft_atoi(argv[i])));
	solve2(a);
}

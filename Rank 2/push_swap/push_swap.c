/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 15:14:57 by agaliste          #+#    #+#             */
/*   Updated: 2021/11/03 01:10:10 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswp.h"

int	main(int argc, char **argv)
{
	t_list *lst;
	// t_list *b;

	lst = NULL;
	init(argv, argc, lst);
	ft_lstclear(&lst, free);
	system("leaks push_swap");
	return 0;
}

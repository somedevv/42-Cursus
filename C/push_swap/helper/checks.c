/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 21:34:48 by agaliste          #+#    #+#             */
/*   Updated: 2021/10/22 21:35:16 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswp.h"

int check(t_stack *a, int num)
{
	int size = ft_lstsize2(a);
	for (int i = 1; i < size; i++)
	{
		if (num == a->next->num)
			return(1);
		a = a->next;
	}
	return(0);
}

int	checkdupp(t_stack *a)
{
	int	i;
	int	j;

	i = ft_lstsize2(a);
	j = 2;
	while (j < i)
	{
		if (check(a, a->num))
			return (1);
		a = a->next;
		j++;
	}
	return (0);
}

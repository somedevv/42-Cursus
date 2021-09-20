/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 03:15:47 by agaliste          #+#    #+#             */
/*   Updated: 2021/09/20 20:25:18 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswp.h"

void	ft_lstprelastdel(t_list **stack)
{
	t_list *lst;
	int i;
	int n;
	
	lst = *stack;
	n = ft_lstsize(stack);
	i = 1;
	while (i < n)
	{
		lst = lst->next;
		i++;
	}
	*stack = lst->next;
	lst->next = NULL;
}

void	rotate(t_list **stack)
{
	t_list *lst;

	lst = ft_lstlast(stack);
	ft_lstadd_front(stack, lst->content);
	ft_lstprelastdel(stack);
	free(lst);
}

void	reverse_rotate(t_list **stack)
{
	
}

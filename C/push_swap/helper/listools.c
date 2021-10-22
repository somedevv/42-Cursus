/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   justry.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 21:16:19 by agaliste          #+#    #+#             */
/*   Updated: 2021/10/22 21:17:09 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswp.h"

int	ft_lstsize2(t_stack *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

void	ft_lstiter2(t_stack *lst, void (*f)(int ))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->num);
		lst = lst->next;
	}
}

t_stack	*ft_lstlast2(t_stack *lst)
{
	if (lst)
		while (lst->next)
			lst = lst->next;
	return (lst);
}

void	ft_lstadd_back2(t_stack **lst, t_stack *new)
{
	t_stack	*tmp;

	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			tmp = ft_lstlast2(*(lst));
			tmp->next = new;
		}
	}
}

t_stack	*ft_lstnew2(int content)
{
	t_stack	*newnode;

	newnode = malloc(sizeof(t_list));
	if (newnode == NULL)
		return (NULL);
	newnode->num = content;
	newnode->next = NULL;
	return (newnode);
}

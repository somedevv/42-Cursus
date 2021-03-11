/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 18:45:17 by agaliste          #+#    #+#             */
/*   Updated: 2021/03/11 13:41:40 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nownode;

	nownode = malloc(sizeof(t_list));
	if (nownode == NULL)
		return (NULL);
	nownode->content = content;
	nownode->next = NULL;
	return (nownode);
}

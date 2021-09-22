/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 18:11:08 by agaliste          #+#    #+#             */
/*   Updated: 2021/09/22 12:07:26 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswp.h"

void	solve2(t_list *lst)
{
	if (lst->content > lst->next->content)
	{
		rotate(&lst, ft_lstsize(lst));
		printf("ra");
	}
}

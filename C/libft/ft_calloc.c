/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 09:05:18 by agaliste          #+#    #+#             */
/*   Updated: 2021/01/25 18:16:38 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		*obj;

	obj = (void*)malloc(sizeof(size) * count);
	if (!obj)
		return (NULL);
	ft_bzero(obj, count);
	return (obj);
}

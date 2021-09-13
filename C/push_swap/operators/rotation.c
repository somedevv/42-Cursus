/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 03:15:47 by agaliste          #+#    #+#             */
/*   Updated: 2021/09/07 03:46:46 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswp.h"

void	*rotate(void *dst, const void *src, size_t n)
{
	size_t	i;
	int aux;

	i = 0;
	if (!dst && !src)
		return (NULL);
	aux = ((int *)dst)[0];
	while (i < n)
	{
		((int *)dst)[i] = ((const int *)src)[i];
		i++;
	}
	((int *)dst)[i] = aux;
	return (NULL);
}

void	*reverse_rotate(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	int aux;

	i = 0;
	if (!dst && !src)
		return (NULL);
	aux = ((int *)src)[n];
	if (src > dst)
	{
		while (i < n)
		{
			((int *)dst)[i] = ((const int *)src)[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i-- > 0)
			((int *)dst)[i]= ((const int *)src)[i];;
	}
	((int *)dst)[-1] = aux;
	return (dst);
}

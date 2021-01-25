/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_bw.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 10:36:34 by agaliste          #+#    #+#             */
/*   Updated: 2021/01/25 10:40:51 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy_bw(void *dst, const void *src, size_t n)
{
	char	*c1;
	char	*c2;

	c1 = (char *)dst;
	c2 = (char *)src;
	if (n == 0 || dst == src)
		return (dst);
	while (n--)
	{
		c1[n] = c2[n];
	}
	return (dst);
}

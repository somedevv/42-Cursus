/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 20:58:38 by agaliste          #+#    #+#             */
/*   Updated: 2021/03/11 13:59:24 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_memcpy_bw(void *dst, const void *src, size_t n)
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

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	if (dst > src)
		return (ft_memcpy_bw(dst, src, len));
	return (dst);
}

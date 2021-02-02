/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 13:18:30 by agaliste          #+#    #+#             */
/*   Updated: 2021/02/02 19:31:48 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	unsigned int	j;
	unsigned int	i;
	unsigned int	backup;

	i = 0;
	j = 0;
	backup = dstsize;
	if (!src || !dst)
		return (0);
	if (!dstsize)
		return (ft_strlen(src));
	while (dstsize > 1 && (dst[i] = src[i]) != 0)
	{
		dst[i] = src[i];
		--dstsize;
		++i;
	}
	if (backup != 0)
		dst[i] = '\0';
	while (src[j])
		++j;
	return (j);
}

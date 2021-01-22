/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 13:18:30 by agaliste          #+#    #+#             */
/*   Updated: 2021/01/22 15:44:08 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t	j;
	int		i;
	int		backup;

	i = 0;
	j = 0;
	backup = dstsize;
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

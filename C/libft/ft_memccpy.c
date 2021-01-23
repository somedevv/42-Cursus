/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 19:09:29 by agaliste          #+#    #+#             */
/*   Updated: 2021/01/23 20:05:35 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

#include "libft.h"
#include <stdio.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == NULL || src == NULL)
		return (NULL);
	while (i < n)
	{
		if (((const char*)src)[i] == c)
			return (&dst[++i]);
		((char *)dst)[i] = ((const char *)src)[i];
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char test[] = "Hola que tal estas";
	char dest[] = "Pepe";

	printf("%s", ft_memccpy(dest, test, 'j', 10));

	return (0);
}

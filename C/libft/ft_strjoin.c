/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 11:55:07 by agaliste          #+#    #+#             */
/*   Updated: 2021/02/02 19:17:11 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char			*str;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (!(str = malloc(sizeof(*s1 + *s2) + 1)))
		return (NULL);
	if (s1 != NULL)
	{
		while (s1[i])
			str[j++] = s1[i++];
		i = 0;
	}
	if (s2 != NULL)
	{
		while (s2[i])
			str[j++] = s2[i++];
	}
	return (str);
}

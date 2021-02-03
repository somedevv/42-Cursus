/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 13:52:15 by agaliste          #+#    #+#             */
/*   Updated: 2021/02/03 17:32:28 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;

	if (!(str = (char *)malloc(ft_strlen(s1) + 1)))
		return (0);
	ft_memcpy(str, s1, ft_strlen(s1) + 1);
	return (str);
}

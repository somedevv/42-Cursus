/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 13:47:37 by agaliste          #+#    #+#             */
/*   Updated: 2021/03/11 13:46:38 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int n)
{
	char	*ret;

	ret = (char *)s;
	while (*ret != n)
	{
		if (*ret == '\0')
			return (NULL);
		ret++;
	}
	return (ret);
}

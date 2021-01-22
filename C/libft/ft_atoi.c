/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 21:06:01 by agaliste          #+#    #+#             */
/*   Updated: 2021/01/22 21:22:32 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int is_neg;
	int nb;
	int is_pos;
	char *ret;

	nb = 0;
	is_neg = 1;
	is_pos = 1;
	ret = (char *)str;
	while (*ret == '\f' || *ret == '\n' || *ret == '\r' ||
	*ret == '\t' || *ret == '\v' || *ret == ' ')
		ret++;
	while (*ret == '+' || *ret == '-')
	{
		if (is_neg != 1 || is_pos != 1)
			return (nb);
		if (*ret == '-')
			is_neg *= -1;
		if (*ret == '+')
			is_pos = 2;
		ret++;
	}
	while (*ret <= '9' && *ret >= '0')
	{
		nb = (nb * 10) + (*ret - '0');
		ret++;
	}
	return (nb * is_neg);
}

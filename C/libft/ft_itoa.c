/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 16:47:04 by agaliste          #+#    #+#             */
/*   Updated: 2021/01/25 17:39:47 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char *num;
	int count;
	long	nb;
	
	count = ft_intlen(n);
	nb = n;
	if (!(num = malloc(sizeof(char*) * count + 1)))
		return (NULL);
	num[count--] = '\0';
	if (nb == 0)
	{
		num[0] = 48;
		return (num);
	}
	if (nb < 0)
	{
		num[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		num[count] = 48 + (nb % 10);
		nb = nb / 10;
		count--;
	}
	return (num);
}

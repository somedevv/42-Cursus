/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 04:06:56 by agaliste          #+#    #+#             */
/*   Updated: 2021/08/14 05:04:35 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_base(char *base)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		z = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[z])
		{
			if (base[i] == base[z])
				return (0);
			z++;
		}
		i++;
	}
	return (1);
}

int	ft_putnbr_base(int nbr, char *base)
{
	int	nbr_final[100];
	int	cerdada[3];

	cerdada[0] = 0;
	cerdada[1] = 0;
	cerdada[2] = 0;
	if (check_base(base))
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			cerdada[2] += ft_putchar('-');
		}
		while (base[cerdada[1]])
			cerdada[1]++;
		while (nbr)
		{
			nbr_final[cerdada[0]] = nbr % cerdada[1];
			nbr = nbr / cerdada[1];
			cerdada[0]++;
		}
		while (--cerdada[0] >= 0)
			cerdada[2] += ft_putchar(base[nbr_final[cerdada[0]]]);
	}
	return (cerdada[2]);
}

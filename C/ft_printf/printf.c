/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 03:29:34 by agaliste          #+#    #+#             */
/*   Updated: 2021/08/14 05:19:28 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *inp, ...)
{
	int		i;
	int		cont;
	va_list	ap;

	cont = 0;
	va_start(ap, inp);
	if (!inp)
		return (NULL);
	while (inp[i] != '\0')
	{
		if (inp[i] == '%')
		{
			if (inp[i + 1] == '%')
				cont += write(1, '%', 1);
			if (inp[i + 1] == 'c')
				cont += ft_putchar(va_arg(ap, int));
			if (inp[i + 1] == 's')
				cont += ft_putstr(va_arg(ap, char *));
			if (inp[i + 1] == 'i')
				cont += ft_putnbr(va_arg(ap, int));
			if (inp[i + 1] == 'u')
				cont += ft_putnbr_un(va_arg(ap, unsigned int));
			if (inp[i + 1] == 'x')
				cont += ft_putnbr_base(va_arg(ap, int), "0123456789abcdef");
			if (inp[i + 1] == 'X')
				cont += ft_putnbr_base(va_arg(ap, int), "0123456789ABCDEF");
		}
	}
	va_end(ap);
	return (cont);
}

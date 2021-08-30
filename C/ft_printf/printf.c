/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 03:29:34 by agaliste          #+#    #+#             */
/*   Updated: 2021/08/30 03:53:46 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *inp, ...)
{
	int		i;
	int		cont;
	va_list	ap;

	cont = 0;
	i = 0;
	va_start(ap, inp);
	cont += ft_prsprint(i, cont, inp, ap);
	va_end(ap);
	return (cont);
}

// int main(){
// 	int ret;
// 	char *null_str = NULL;
// 	ret = ft_printf("the password is %x", 3735929054u);
// 	printf("\nGot: %d\n", ret);
// 	ret = printf("the password is %x", 3735929054u);
// 	printf("\nExpected: %d", ret);
// }
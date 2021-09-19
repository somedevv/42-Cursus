/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 03:15:47 by agaliste          #+#    #+#             */
/*   Updated: 2021/09/15 02:57:38 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswp.h"

void	rotate(int *dst, const int *src, int n, char stack)
{
	int	aux;
	int	i;

	i = 0;
	aux = dst[0];
	while (i < n){
		dst[i] = src[i + 1];
		i++;
	}
	dst[n - 1] = aux;
	ft_printf("r%c\n", stack);
}

void	reverse_rotate(int *dst, const int *src, int n, char stack)
{
	int aux;
	int i;

	i = n - 1;
	aux = dst[n - 1];
	while (i > 0){
		dst[i] = src[i - 1];
		i--;
	}
	dst[0] = aux;
	ft_printf("r%c\n", stack);
}
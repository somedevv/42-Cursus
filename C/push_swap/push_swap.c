/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 15:14:57 by agaliste          #+#    #+#             */
/*   Updated: 2021/09/12 20:28:42 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswp.h"

int	main(int argc, char **argv)
{
	int *str;
	int i;
	int j;

	i = 1;
	j = 0;
	str = malloc(sizeof(int));
	if (checkstring(argv, argc) == 1 || argc < 2 || !argv || !str)
	{
		ft_printf("Error\n");
		return (1);
	}
	while(i < argc)
		str[j++] = ft_atoi(argv[i++]);
	for(int i = 0; i < argc - 1; i++)
	 	ft_printf("%d ", str[i]);
	ft_printf("\n");
	rotate(str, str + 1, argc - 2);
	for(int i = 0; i < argc - 1; i++)
	 	ft_printf("%d ", str[i]);
	ft_printf("\n");
	// reverse_rotate(str + 1, str, argc - 2);
	free(str);
	return(1);
}

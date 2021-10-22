/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 15:14:57 by agaliste          #+#    #+#             */
/*   Updated: 2021/10/22 19:07:44 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswp.h"

int	main(int argc, char **argv)
{
	// t_list *a;
	// t_list *b;
	char **str;

	// a = ft_lstnew(ft_atoi(argv[1]));
	(void)argc;
	for(int i = 1; argv[i]; i++)
	{
		str = ft_split((argv[i]), ' ');
		if (!(parse(str)))
		{
			printf("----------- %i -----------\n", i);
			return 0;
		}
		for(int j = 0; str[j]; j++)
			free(str[j]);
		free(str);
	}
	return 0;
}

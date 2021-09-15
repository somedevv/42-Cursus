/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 04:00:44 by agaliste          #+#    #+#             */
/*   Updated: 2021/09/15 03:31:48 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswp.h"

void	freestack(int *a, int *b)
{
	free(a);
	free(b);
}

int	checkstring(char **argv, int argc)
{
	int	i;
	int	j;

	i = 1;
	while (i <= argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] >= ':' || argv[i][j] <= '/')
			{
				if (argv[i][j] == '-' && !(argv[i][j + 1] >= '0' &&
				 argv[i][j + 1] <= '9'))
				{
					ft_printf("Error!\n");
					return (1);
				}
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	checkint(long long int nbr)
{
	if (nbr < -2147483648 || nbr > 2147483647)
	{
		ft_printf("Error!\n");
		return (1);
	}
	return (0);
}

int	checkrepeat(int *a, int argc)
{
	int	i;
	int	j;

	i = 0;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (a[i] == a[j])
			{
				ft_printf("Error!\n");
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	initchecks(char **argv, int argc, int *a, int *b)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (checkint(ft_atoi(argv[i])) == 1)
		{
			freestack(a, b);
			return (1);
		}
		a[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	if (checkrepeat(a, argc - 1) == 1)
	{
		freestack(a, b);
		return (1);
	}
	return (0);
}

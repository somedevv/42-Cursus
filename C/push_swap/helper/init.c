/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 21:18:20 by agaliste          #+#    #+#             */
/*   Updated: 2021/11/03 01:13:40 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswp.h"

int	parse(char **str)
{
	int	i;
	int	j;

	i = -1;
	while (str[++i])
	{
		j = -1;
		while (str[i][++j] != '\0')
		{
			if (ft_isalpha(str[i][j]))
			{
				printf("KO! -> Character [%c] in [%s]\n", str[i][j], str[i]);
				return (0);
			}
		}
		if (ft_atoli(str[i]) > 2147483647 || ft_atoli(str[i]) < -2147483648)
		{
			printf("KO! -> Number [%s] too big\n", str[i]);
			return (0);
		}
		j = i;
		while (str[++j])
		{	
			if (ft_atoi(str[i]) == ft_atoi(str[j]))
			{
				printf("KO! -> Found repeated number [%s] | Positions [%i] & [%i]\n", str[i], i, j);
				return (0);
			}
		}
	}
	return (1);
}

void	savetolist(t_list **lst, int argc, char **argv)
{
	char	**str;
	int		i;
	int		j;
	t_stack *num;

	i = 1;
	num = NULL;
	while (i < argc)
	{
		str = ft_split((argv[i++]), ' ');
		j = 0;
		while (str[j])
		{
			num = ft_calloc(1, sizeof(t_stack*));
			num->num = ft_atoi(str[j++]);
			ft_lstadd_back(lst, ft_lstnew(num));
		}
		freestr(str);
	}
}

int	init(char **argv, int argc, t_list *a)
{
	char	**str;
	int		i;

	i = 1;
	if (argv[i])
	{
		while (argv[i])
		{
			str = ft_split((argv[i]), ' ');
			if (!(parse(str)))
			{
				printf("----------- %i -----------\n", i);
				freestr(str);
				return (1);
			}
			freestr(str);
			i++;
		}
	}
	else
		return 0;
	savetolist(&a, argc, argv);
	if (checkdupp(a))
	{
		write(1, "DUP\n", 4);
		return (1);
	}
	ft_lstiter(a, printlist);
	return (0);
}

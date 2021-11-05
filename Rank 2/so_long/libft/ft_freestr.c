/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freestr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 23:21:49 by agaliste          #+#    #+#             */
/*   Updated: 2021/11/05 23:26:40 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_freestr(char **str)
{
	int	j;

	j = 0;
	while (str[j])
		free(str[j++]);
	free(str);
}

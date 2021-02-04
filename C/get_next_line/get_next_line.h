/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 09:03:47 by agaliste          #+#    #+#             */
/*   Updated: 2021/02/04 10:05:32 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

/*
** Main Functions
*/

int		get_next_line(int fd, char **line);

/*
** Bonus Functions
*/

size_t	ft_strlen(const char *str);
char	*ft_strjoin(const char *s1, const char *s2);
void	*ft_memmove(void *dst, const void *src, size_t len);
int		check_return(char *str);

#endif

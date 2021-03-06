/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 09:03:47 by agaliste          #+#    #+#             */
/*   Updated: 2021/03/15 15:50:43 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFFER_SIZE 2

# include <stdlib.h>
# include <string.h>
# include <unistd.h>

/*
** GNL
*/

int			get_next_line(int fd, char **line);

/*
** Utils
*/

size_t		ft_strlen(const char *s);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strdup(const char *s1);
void		ft_bzero(void *s, size_t n);
char		*ft_strchr(const char *s, int c);

#endif

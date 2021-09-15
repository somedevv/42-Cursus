/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 13:12:25 by agaliste          #+#    #+#             */
/*   Updated: 2021/09/14 23:52:03 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdarg.h>
# include "../printf/printf.h"

int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(int n);
int		ft_putunsnbr_base(unsigned int nbr, char *base);
int		ft_putlngnbr_base(unsigned long nbr, char *base);
int		ft_putunsnbr(unsigned int n);
int		ft_hexpoint(unsigned long pnt);
size_t	ft_strlen(const char *str);
int		ft_prsprint(int i, int cont, const char *input, va_list	ap);
int		check_base(char *base);
int		long long ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);

#endif

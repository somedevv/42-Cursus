/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 13:12:25 by agaliste          #+#    #+#             */
/*   Updated: 2021/08/30 03:39:15 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_putunsnbr_base(unsigned int nbr, char *base);
int	ft_putlngnbr_base(unsigned long nbr, char *base);
int	ft_putunsnbr(unsigned int n);
int ft_hexpoint(unsigned long pnt);
size_t	ft_strlen(const char *str);
int ft_prsprint(int i, int cont, const char *input, va_list	ap);
int	check_base(char *base);

#endif

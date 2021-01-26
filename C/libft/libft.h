/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 13:12:25 by agaliste          #+#    #+#             */
/*   Updated: 2021/01/26 18:48:30 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

/*
** Libc Functions
*/

int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isascii(int c);
int		ft_isalnum(int c);
int		ft_isprint(int c);
void	ft_bzero(void *sr, size_t n);
char	*ft_strchr(const char *s, int n);
char	*ft_strrchr(const char *s, int n);
int		ft_isalnum(int c);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
char	*ft_strdup(const char *s1);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, char *src, size_t dstsize);
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_atoi(const char *str);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_calloc(size_t count, size_t size);

/*
** Added Functions
*/

char	*ft_strjoin(const char *s1, const char *s2);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
/*
** Helper Functions
*/

void	*ft_memcpy_bw(void *dst, const void *src, size_t n);
int		ft_intlen(long nb);

#endif

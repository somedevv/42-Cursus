NAME = libft.a

SRCS = ft_isdigit.c helperft/ft_memcpy_bw.c ft_memset.c ft_isprint.c\
ft_strlcat.c ft_atoi.c ft_putchar_fd.c ft_putstr_fd.c\
ft_strlcpy.c ft_tolower.c ft_bzero.c ft_memccpy.c ft_strlen.c\
ft_toupper.c ft_calloc.c ft_memchr.c ft_isalnum.c ft_putendl_fd.c\
ft_memcmp.c ft_strncmp.c ft_isalpha.c ft_memcpy.c ft_strchr.c\
ft_strnstr.c ft_isascii.c ft_memmove.c ft_strdup.c ft_strrchr.c\
ft_putnbr_fd.c helperft/ft_intlen.c ft_substr.c ft_strjoin.c\
ft_strtrim.c helperft/ft_charsrch.c

OBJS = ${SRCS:.c=.o}


CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

bonus:	${OBJS} 
		ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS} 

fclean:	clean
		${RM} ${NAME}

re:		fclean all
NAME = libftprintf.a

SRCS =	printf.c \
		libft/ft_putchar.c \
		libft/ft_putstr.c \
		libft/ft_putnbr.c \
		libft/ft_putnbr_un.c \
		libft/ft_putnbr_base.c \
		

OBJS = ${SRCS:.c=.o}

CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

all: ${NAME} ${OBJS}

re:		fclean all

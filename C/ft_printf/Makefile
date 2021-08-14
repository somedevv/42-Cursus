NAME = libft.a

SRCS =	printf.c \
		libft/ft_putchar_fd.c \
		libft/ft_putstr_fd.c \
		libft/ft_putnbr_fd.c \
		

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

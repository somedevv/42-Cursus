LNAME = libft.a
PNAME = push_swap

SRCS =	printf/printf.c \
		libft/ft_putchar.c \
		libft/ft_putstr.c \
		libft/ft_putnbr.c \
		libft/ft_putunsnbr.c \
		libft/ft_putunsnbr_base.c \
		libft/ft_prsprint.c \
		libft/ft_strlen.c \
		libft/ft_hexpoint.c \
		libft/ft_putlngnbr_base.c \
		libft/check_base.c \
		libft/ft_atoi.c \
		libft/checkstring.c \
		libft/ft_bzero.c \
		operators/rotation.c
		
PSRCS =	push_swap.c \
		libft.a

OBJS = ${SRCS:.c=.o}

CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

COUNTER=1

.c.o:
		@echo "\033[1;36m$(COUNTER) files compiled!\033[0m"
		@${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}
		$(eval COUNTER=$(shell echo $$(($(COUNTER)+1))))
$(LNAME): ${OBJS}
		@echo "\033[1;35mBuilding $(LNAME) library...\033[0m"
		@ar rcs ${LNAME} ${OBJS}
		@echo "\033[1;36mMaking ${PNAME}...\033[0m"
		@${CC} ${CFLAGS} ${PSRCS} -o ${PNAME}
		@echo "\033[1;32mDONE!\033[0m"

remake:
		@echo "\033[1;36mRemaking ${PNAME}...\033[0m"
		@${CC} ${CFLAGS} ${PSRCS} -o ${PNAME}
		@echo "\033[1;32mDONE!\033[0m"

clean:  
		@echo "\033[1;36mCleaning...\033[0m"
		@${RM} ${OBJS} ${PNAME}
		@echo "\033[1;32mSome junk removed!\033[0m"

fclean:
		@echo "\033[1;36mCleaning...\033[0m"	
		@${RM} ${OBJS} ${PNAME}
		@${RM} ${LNAME} 
		@echo "\033[1;32mAll the junk removed!\033[0m"

all: ${NAME} ${OBJS}

re:		fclean all

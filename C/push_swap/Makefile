LNAME = libft.a
PNAME = push_swap

SRCS =	libft/ft_isdigit.c \
		libft/ft_memset.c \
		libft/ft_isprint.c \
		libft/ft_strlcat.c \
		libft/ft_atoi.c \
		libft/ft_putchar_fd.c \
		libft/ft_putstr_fd.c \
		libft/ft_strlcpy.c \
		libft/ft_tolower.c \
		libft/ft_bzero.c \
		libft/ft_memccpy.c \
		libft/ft_strlen.c \
		libft/ft_toupper.c \
		libft/ft_calloc.c \
		libft/ft_memchr.c \
		libft/ft_isalnum.c \
		libft/ft_putendl_fd.c \
		libft/ft_memcmp.c \
		libft/ft_strncmp.c \
		libft/ft_isalpha.c \
		libft/ft_memcpy.c \
		libft/ft_strchr.c \
		libft/ft_strnstr.c \
		libft/ft_isascii.c \
		libft/ft_memmove.c \
		libft/ft_strdup.c \
		libft/ft_strrchr.c \
		libft/ft_putnbr_fd.c \
		libft/ft_substr.c \
		libft/ft_strjoin.c \
		libft/ft_strtrim.c \
		libft/ft_strmapi.c \
		libft/ft_itoa.c \
		libft/ft_split.c \
		libft/ft_lstnew.c \
		libft/ft_lstadd_front.c \
		libft/ft_lstsize.c \
		libft/ft_lstlast.c \
		libft/ft_lstadd_back.c \
		libft/ft_lstdelone.c \
		libft/ft_lstclear.c \
		libft/ft_lstiter.c \
		libft/ft_lstmap.c \
		operators/rotation.c \
		solver/solve_5_or_less.c \
		helper/checks.c \
		helper/find.c \
		helper/calc.c
		
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
		@${RM} ${OBJS}
		@echo "\033[1;32mSome junk removed!\033[0m"

fclean:
		@echo "\033[1;36mCleaning...\033[0m"	
		@${RM} ${OBJS} ${PNAME}
		@${RM} ${LNAME} 
		@echo "\033[1;32mAll the junk removed!\033[0m"

all: ${NAME} ${OBJS}

re:		fclean all

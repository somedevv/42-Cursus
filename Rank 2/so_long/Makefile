NAME = so_long

SRCS =	main.c \
		helper/parse.c \
		helper/tools.c \
		helper/checker.c \
		mlxfunc/hooks.c \
		mlxfunc/draw.c \
		helper/moves.c \

FLAGS = -Wall -Wextra -Werror -fsanitize=address

OBJS = $(SRCS:.c=.o)

INCL= ./libft/libft.a \

CC = gcc

%.o: %.c
	$(CC) $(FLAGS) -Imlx -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(SRCS) -Iincludes $(INCL) -Lmlx -lmlx -framework OpenGL -framework AppKit -lz -o $(NAME)

all: $(NAME)

libs:
	@make bonus -C ./libft/
	@make -C ./mlx/

clean:
	@rm -rf $(OBJS)
	@echo "cleaning .o files"

fclean: clean
	@rm -rf $(NAME)

cleanl:
	@make fclean -C ./libft/
	@make clean -C ./mlx/

re: fclean all
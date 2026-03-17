NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

INCLUDES = -Iincludes -I$(LIBFT_DIR)

SRC = src/main.c \
      src/parse.c \
      src/parse_utils.c \
      src/error.c \
      src/free_utils.c \
      src/stack_init.c \
      src/stack_utils.c \
      src/stack_utils2.c \
      src/operations_swap.c \
      src/operations_push.c \
      src/operations_rotate.c \
      src/operations_reverse_rotate.c \
      src/sort_small.c \
      src/sort_turk.c \
      src/target_cost.c \
      src/move_utils.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJ)
	make -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror -g

SRCS =	main.c \
		error/error_handling.c \
		libft/ft_strlen.c \
		libft/ft_split.c \
		libft/ft_substr.c \
		libft/ft_atoi.c

OBJS_DIR = obj
OBJS = $(SRCS:%.c=$(OBJS_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

# Compila .c → obj/.o (criando pastas se necessário)
$(OBJS_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
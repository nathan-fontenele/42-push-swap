CC = cc

CFLAGS = -Wall -Wextra -Werror

TARGET = libft.a

SRCS = ft_isdigit.c \
       ft_strlen.c \
       ft_strchr.c \
       ft_substr.c \
       ft_split.c
       

BONUS_SRCS = ft_lstnew_bonus.c \
              ft_lstadd_front_bonus.c \
              ft_lstsize_bonus.c \
              ft_lstlast_bonus.c \
              ft_lstadd_back_bonus.c \
              ft_lstdelone_bonus.c \
              ft_lstclear_bonus.c \
              ft_lstiter_bonus.c \
              ft_lstmap_bonus.c

OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	ar rcs $@ $(OBJS)

bonus: $(TARGET) $(BONUS_OBJS)
	ar rcs $(TARGET) $(BONUS_OBJS)


.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -rf $(TARGET)

re: fclean all

.PHONY: all clean fclean re bonus

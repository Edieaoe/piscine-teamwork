NAME	= libft.a
SRCS	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS	= $(SRCS:%.c=%.o)
CC		= cc -Wall -Wextra -Werror

.c.o:
	$(CC) -I ./includes/ -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all


NAME	= do-op
SRCS	= ft_atoi.c main.c math.c
OBJS	= $(SRCS:%.c=%.o)
CC		= cc -Wall -Wextra -Werror

.c.o:
	$(CC) -c $< -o $@

all: $(NAME)

$(NAME):
	cc $(SRCS) -o do-op

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all


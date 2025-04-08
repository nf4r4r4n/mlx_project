NAME	=	my_proj
CFLAGS	=	-Wall -Wextra -Werror
CC		=	cc
SRCS	=	main.c
OBJS	=	$(SRCS:.c=.o)

%.o: %.c
	make -C mlx_linux
	$(CC) -Wall -Wextra -Werror -I/usr/include -Imlx_linux -O3 -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(OBJS) -Lmlx_linux -lmlx_Linux -L/usr/lib -Imlx_linux -lXext -lX11 -lm -lz -o $(NAME)

all:	$(NAME)

clean:
	make -C ./mlx_linux clean
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re

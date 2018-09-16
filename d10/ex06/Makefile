NAME = do-op

FLAG = -c -Wall -Werror -Wextra

HDR = -I includes/

SRC = srcs/do_op.c srcs/ft_display.c srcs/ft_op.c

OBJ = ft_display.o ft_op.o do_op.o

all: $(NAME)

$(NAME):
	@gcc $(FLAG) $(HDR) $(SRC)
	@gcc $(OBJ) -o $(NAME)

clean:
	@/bin/rm $(OBJ)
	
fclean:	
	@/bin/rm -rf $(NAME) $(OBJ)

re: fclean all

NAME = sastantua

SDIR = srcs/
_SRC = *.c
SRC = $(patsubst %,$(SDIR)/%,$(_SRC))

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@gcc -o $(NAME) $(FLAGS) $(SRC)
clean:
	@/bin/rm -f $(OBJ)
fclean:
	@/bin/rm -f $(NAME) $(OBJ)
re: clean all
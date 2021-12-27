NAME = span

CC = c++

CFLAGS = -Wall -Werror -Wextra

SRC = *.cpp

OBJ :=  $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):
		$(CC) -c $(CFLAGS) $(SRC)
		$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re:	
		make fclean
		make all

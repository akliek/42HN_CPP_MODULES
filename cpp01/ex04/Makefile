# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akliek <akliek@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/25 12:31:10 by akliek            #+#    #+#              #
#    Updated: 2021/10/25 16:59:26 by akliek           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

CC = clang++

CFLAGS = -Wall -Werror -Wextra

SRC = *.cpp

OBJ :=  $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):
		$(CC) -c $(CFLAGS) $(SRC)
		$(CC) $(OBJ) -o $(NAME)

clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re:	
		make fclean
		make all

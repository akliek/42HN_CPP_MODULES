# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akliek <akliek@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/25 12:12:38 by akliek            #+#    #+#              #
#    Updated: 2021/10/25 12:12:47 by akliek           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain

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

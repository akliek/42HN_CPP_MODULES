# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akliek <akliek@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/22 12:25:15 by akliek            #+#    #+#              #
#    Updated: 2021/10/23 16:08:04 by akliek           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account

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

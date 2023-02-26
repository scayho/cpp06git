# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/16 20:33:13 by abelahce          #+#    #+#              #
#    Updated: 2023/02/25 15:28:27 by abelahce         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=c++

CFLAGS= -Wall -Wextra -Werror -std=c++98

NAME=convert

HDR= ScalarConverter.hpp

SRC := main.cpp	ScalarConverter.cpp

OBJ := $(SRC:.cpp=.o)

%.o : %.cpp $(HDR)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME):$(OBJ)
	$(CC) $(CFLAGS)  $(OBJ) -o $(NAME)

clean :
	rm -rf  $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
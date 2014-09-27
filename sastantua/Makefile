# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glafitte <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/09/11 09:05:57 by glafitte          #+#    #+#              #
#    Updated: 2014/09/27 15:18:26 by hamza            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sastantua

SRC = sastantua.c main.c

OBJ = sastantua.o main.o

CFLAGS = -Wall -Werror -Wextra

CLiB = -L. -lft

all: $(NAME)

$(NAME):
	gcc -c $(SRC)
	gcc $(OBJ) $(CLiB) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

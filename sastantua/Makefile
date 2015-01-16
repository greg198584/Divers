# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glafitte <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/09/11 09:05:57 by glafitte          #+#    #+#              #
#    Updated: 2015/01/16 10:26:05 by glafitte         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sastantua
SRC = sastantua.c main.c
OBJ = sastantua.o main.o
CFLAGS = -Wall -Werror -Wextra
LIBFT = libft

all: $(NAME)

$(NAME):
	@make -C libft re
	gcc -c $(SRC)
	gcc $(OBJ) -L $(LIBFT) -lft -o $(NAME)

clean:
	@make -C libft clean
	rm -f $(OBJ)

fclean: clean
	@make -C libft fclean
	rm -f $(NAME)

re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/05 16:57:32 by ikarjala          #+#    #+#              #
#    Updated: 2021/11/06 13:13:29 by ikarjala         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME       = libft.a
BIN        = ./$(NAME)
SRC_DIR    = ./
SRC        = ft_strlen.c ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isprint.c ft_isascii.c
OBJ        = ft_strlen.o ft_isdigit.o ft_isalpha.o ft_isalnum.o ft_isprint.o ft_isascii.o
INC_DIR    = ./
LIB        =
FLAGS      = -Wall -Wextra -Werror

all: $(NAME)
$(NAME):
	@echo '$(NAME) :: Starting build...'
	gcc -c	$(FLAGS) $(addprefix $(SRC_DIR),$(SRC)) -I $(INC_DIR)
	ar -cr	$(BIN) $(OBJ)
	ranlib	$(BIN)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(BIN) $(LIB)
re: fclean all

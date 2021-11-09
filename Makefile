# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/05 16:57:32 by ikarjala          #+#    #+#              #
#    Updated: 2021/11/08 19:29:37 by ikarjala         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME       = libft.a
BIN        = ./$(NAME)
CFUNC      = ft_strlen ft_isspace ft_isdigit ft_isalpha ft_isalnum ft_isprint ft_isascii ft_tolower ft_toupper \
             ft_bzero ft_memset ft_strchr ft_strrchr ft_strstr ft_atoi
SRC_DIR    = ./
OBJ_DIR    = ./
SRC        = $(addprefix $(SRC_DIR),$(addsuffix .c,$(CFUNC)))
OBJ        = $(addprefix $(OBJ_DIR),$(addsuffix .o,$(CFUNC)))
INC_DIR    = ./
LIB        =
FLAGS      = -Wall -Wextra -Werror

all: $(NAME)
$(NAME):
	@echo '$(NAME) :: Starting build...'
	gcc -c	$(FLAGS) $(SRC) -I $(INC_DIR)
	ar -cr	$(BIN) $(OBJ)
	ranlib	$(BIN)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(BIN) $(LIB)
re: fclean all

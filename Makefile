# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/05 16:57:32 by ikarjala          #+#    #+#              #
#    Updated: 2021/11/16 19:38:31 by ikarjala         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME       = libft.a
BIN        = ./$(NAME)
CFUNC      = ft_isspace ft_isdigit ft_isalpha ft_isalnum ft_isprint ft_isascii ft_tolower ft_toupper \
             ft_putchar_fd ft_putchar ft_putstr_fd ft_putstr ft_putendl_fd ft_putendl ft_putnbr_fd ft_putnbr \
             ft_bzero ft_memset ft_memcpy ft_memccpy ft_memmove ft_memchr ft_memcmp ft_memalloc \
			 ft_strcat \
             ft_strlen ft_atoi ft_itoa ft_strchr ft_strrchr ft_strstr ft_strcmp ft_strncmp ft_strequ ft_strnequ
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

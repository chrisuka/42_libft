# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/05 16:57:32 by ikarjala          #+#    #+#              #
#    Updated: 2021/12/18 21:15:46 by ikarjala         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
BIN		= ./$(NAME)
CFUNC	= \
ft_isdigit ft_isalpha ft_isalnum ft_isprint ft_isascii \
ft_tolower ft_toupper ft_strlen ft_itoa ft_atoi \
\
ft_putchar_fd ft_putchar ft_putstr_fd ft_putstr ft_putendl_fd ft_putendl \
ft_putnbr_fd ft_putnbr \
\
ft_bzero ft_memset ft_memdel ft_memcpy ft_memccpy ft_memmove ft_memchr \
ft_memcmp ft_memalloc \
\
ft_strcmp ft_strncmp ft_strequ ft_strnequ \
ft_strchr ft_strrchr ft_strstr ft_strnstr \
ft_strcat ft_strncat ft_strlcat ft_strcpy ft_strncpy ft_striter ft_striteri \
ft_strnew ft_strdel ft_strclr ft_strdup ft_strsub ft_strmap ft_strmapi \
ft_strjoin ft_strtrim ft_strsplit \
\
ft_lstnew ft_lstdelone ft_lstdel ft_lstadd ft_lstiter ft_lstmap \
\
ft_isspace ft_isupper ft_islower ft_isxdigit ft_strchr_equ \
ft_lmax ft_lmin ft_abs \
ft_swap ft_memdup ft_sort_bubble ft_strword ft_wordcount ft_aiter ft_freearray

SRC_DIR		= ./
OBJ_DIR		= ./
SRC			= $(addprefix $(SRC_DIR),$(addsuffix .c,$(CFUNC)))
OBJ			= $(addprefix $(OBJ_DIR),$(addsuffix .o,$(CFUNC)))
INC_DIR		= ./
LIB_DIR		=
LIB			=
FLAGS		= -Wall -Wextra -Werror -Wimplicit -Wconversion
CC			= clang

COL_HL		= \x1B[33m
COL_CS		= \x1B[0m
COL_NUL		= \x1B[0m

##	BUILD ====
all: $(NAME)
$(NAME):
	@echo -e '$(COL_HL)' '$(NAME) :: Starting build...' '$(COL_NUL)'
	$(CC) -c $(FLAGS) $(SRC) -I $(INC_DIR)
	ar -cr	$(BIN) $(OBJ)
	ranlib	$(BIN)
	@echo -e '$(COL_CS)' '$(NAME) :: Build Success' '$(COL_NUL)'
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(BIN) $(LIB)
re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/05 16:57:32 by ikarjala          #+#    #+#              #
#    Updated: 2022/07/09 00:05:21 by ikarjala         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
BIN		= $(ROOT)$(NAME)
ROOT	:= ./

FUNC_P12	= \
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
ft_strjoin ft_strtrim ft_strsplit

FUNC_BONUS	= \
ft_lstnew ft_lstdelone ft_lstdel ft_lstadd ft_lstiter ft_lstmap

FUNC_EXTRA	= \
ft_isspace ft_isupper ft_islower ft_isxdigit ft_toinverse ft_strchr_equ \
ft_abs ft_log10 ft_pow ft_strword ft_wordcount ft_mapi \
ft_swap ft_memdup ft_memclr ft_aiter ft_freearray \
\
ft_lstlen ft_lstclen ft_lstn ft_lstbuflen \
ft_lstinit ft_lstcut ft_lststr

CFUNC	= $(FUNC_P12) $(FUNC_BONUS) $(FUNC_EXTRA)

SRC_DIR		= $(ROOT)
OBJ_DIR		= $(ROOT)
INC_DIR		= $(ROOT)

SRC			= $(addprefix $(SRC_DIR), $(addsuffix .c, $(CFUNC)))
OBJ			= $(addprefix $(OBJ_DIR), $(addsuffix .o, $(CFUNC)))
INCLUDE		= $(addprefix -I , $(INC_DIR))
RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror
DEBUG_FLAGS	= $(CFLAGS) -Wimplicit -Wconversion -g -fsanitize=address
CC			= clang
AR			= ar -cru

.PHONY: all clean fclean re

all: $(NAME)
$(NAME): premsg $(OBJ) Makefile
	@echo	$(BMSG_AR)
	@$(AR)		$(BIN) $(OBJ)
	@ranlib		$(BIN)
	@echo	$(BMSG_FIN)

$(OBJ): %.o:%.c Makefile
	@printf	"$<\t\t... "
	@$(CC) -c $(CFLAGS) $< -o $@ $(INCLUDE)
	@echo	"DONE"

clean:
	@echo	'Cleaning objects...'
	@$(RM) $(OBJ)
fclean: clean
	@echo	'Removing binary...'
	@$(RM) $(BIN) $(BIN:.a=.so)
re: fclean all

so:
	@echo	$(BMSG_SO)
	$(CC) -nostartfiles -fPIC $(FLAGS) $(SRC)
	$(CC) -nostartfiles -shared -o libft.so $(OBJ)
	@echo	$(BMSG_FIN)

premsg:
	@echo	$(BMSG_BIN)
	@echo	$(BMSG_CC)
	@echo	$(BMSG_RELINK)

BMSG_BIN	= '$(COL_HL)$(NAME) :: Starting build... $(COL_NUL)'
BMSG_SO		= '$(COL_HL)$(NAME) :: Starting SO build... $(COL_NUL)'
BMSG_DEBUG	= '$(COL_HL)$(NAME) :: Starting =DEBUG= build... $(COL_NUL)'
BMSG_CC		= '$(COL_HL)$(NAME) :: Using $(CC) with $(CFLAGS) $(COL_NUL)'
BMSG_RELINK	= '$(COL_HL)$(NAME) :: Compiling C objects:'
BMSG_AR		= '$(COL_HL)$(NAME) :: Linking... ($(AR))'
BMSG_FIN	= '$(COL_CS)$(NAME) :: Build success! $(COL_NUL)'

#COL_HL		:=^[[0;33m
#COL_CS		:=^[[0;32m
#COL_NUL		:=^[[0;0m

##	UTILS ====
CMD_NORME	= norminette -R CheckForbiddenSourceHeader
norme:
	$(CMD_NORME) $(SRC_DIR)*.c $(INC_DIR)*.h

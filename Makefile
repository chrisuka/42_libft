# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikarjala <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/05 16:57:32 by ikarjala          #+#    #+#              #
#    Updated: 2022/10/16 20:39:14 by ikarjala         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ROOT	:= ./
NAME	:= libft
SO		:= $(NAME:.a=.so)

SRC_DIR	:= src/
OBJ_DIR	:= obj/
INC_DIR	:= ./

MANDATORY_FILES =\
isdigit isalpha isalnum isascii isprint tolower toupper itoa atoi \
strlen strcmp strncmp strequ strnequ \
strchr strrchr strstr strnstr \
\
strcpy strncpy strcat strncat strlcat striter striteri \
strnew strdup strsub strtrim strmap strmapi strjoin strsplit \
strclr strdel \
\
bzero memset memchr memcmp memcpy memccpy memmove mapi \
memalloc memdup memdel memclr \
\
putchar putchar_fd putstr putstr_fd putendl putendl_fd \
putnbr putnbr_fd

BONUS_FILES =\
lstnew lstadd lstdelone lstdel lstiter lstmap \

FUNC_EXTRA	= \
ft_isspace ft_isupper ft_islower ft_isxdigit ft_toinverse \
ft_abs ft_log10 ft_pow ft_strword ft_wordcount ft_mapi \
ft_swap ft_memdup ft_memclr ft_aiter ft_freearray \
\
ft_lstlen ft_lstclen ft_lstn ft_lstbuflen \
ft_lstinit ft_lstcut ft_lststr \
ft_bool2sign ft_min ft_max \
ft_bset64

SUBMAKES = config.mk
include $(SUBMAKES)
#=== SPECIAL ==================================================================#
.DEFAULT_GOAL	:= all
.PHONY: all clean fclean re
#=== TARGETS ==================================================================#
all: $(NAME) | $(SO)
$(NAME): $(PRE_REQUISITE) | $(OBJ)
	@$(ECHO) $(BMSG_LD)
	@$(LD) -o $(@) $(LDFLAGS) $(OBJ)
	@$(ECHO) $(BMSG_FIN)
$(SO):

SRC_DIR		= $(ROOT)src/
OBJ_DIR		= $(ROOT)obj/
INC_DIR		= $(ROOT)

SRC			= $(CFUNC:%=$(SRC_DIR)%.c)
OBJ			= $(CFUNC:%=$(OBJ_DIR)%.o)
INCLUDE		= $(addprefix -I , $(INC_DIR))
RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror
DEBUG_FLAGS	= -g -fsanitize=address
RIGOR_FLAGS	= -Wimplicit -Wconversion
SOFLAGS		= -nostartfiles -fPIC
CC			= clang
AR			= ar -cr

.PHONY: all clean fclean re db debug so

all: $(NAME)
$(NAME): $(OBJ) Makefile
	@printf	"\n"
	@echo	$(BMSG_AR)
	@$(AR)		$(BIN) $(OBJ)
	@ranlib		$(BIN)
	@echo	$(BMSG_FIN)
$(SO): NAME := $(SO)
$(SO): $(NAME)

$(OBJ): $(OBJ_DIR)%.o:$(SRC_DIR)%.c Makefile
	@$(CC) -c $(CFLAGS) $(INCLUDE) $< -o $@
	@printf	"$(GREEN)$<\t$(CLEAR)"

$(OBJ_DIR):
	@$(MKDIR) $(@)
#-- CLEANUP ---------------------------|----//--||
clean:
	@$(ECHO)	"Cleaning objects..."
	@$(RM)		$(OBJ) $(DEPENDENCIES) $(PRE_REQUISITE)
	@$(RM) -d	$(OBJ_DIR)
fclean: clean
	@$(ECHO)	"Removing binaries..."
	@$(RM) $(NAME) $(SO)
re: fclean all

so: CFLAGS += $(SOFLAGS)
so: BMSG_FORM := SO (dylib)
so: $(SO)

db: debug
debug: CFLAGS += $(DEBUG_FLAGS)
debug: BMSG_FORM := =DEBUG=
debug: $(NAME)

PRE_BUILD_MESSAGE:
	@echo	$(BMSG_BIN)
	@echo	$(BMSG_CC)
	@echo	$(BMSG_RELINK)

BMSG_BIN	= "$(PURPLE)$(NAME) :: Starting $(BMSG_FORM) build...$(CLEAR)"
BMSG_FORM	:= deploy

BMSG_CC		= "$(PURPLE)$(NAME) :: Using $(CC) with $(CFLAGS)$(CLEAR)"
BMSG_RELINK	= "$(PURPLE)$(NAME) :: Compiling C objects:"
BMSG_AR		= "$(PURPLE)$(NAME) :: Linking..."
BMSG_FIN	= "$(GREENB)$(NAME) :: Build success!$(CLEAR)"

RED		:=\033[1;31m
GREEN	:=\033[0;32m
GREENB	:=\033[1;32m
PURPLE	:=\033[1;35m
CYAN	:=\033[1;36m
CLEAR	:=\033[0;0m

##	UTILS ====
CMD_NORME	:= norminette -R CheckForbiddenSourceHeader
norme:
	$(CMD_NORME) $(SRC_DIR)*.c $(INC_DIR)*.h

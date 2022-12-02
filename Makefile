# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikarjala <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/19 01:31:36 by ikarjala          #+#    #+#              #
#    Updated: 2022/12/01 13:21:26 by ikarjala         ###   ########.fr        #
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

EXTRA_FILES =\
islower isupper isspace isxdigit toinverse \
bool2sign abs log10 pow min max utoa64 \
swap strword wordcount \
aiter freearray bset64 \
lstlen lstn lstclen lstinit lstcut lstbuflen lststr
CSTAGE	= $(MANDATORY_FILES) $(BONUS_FILES) $(EXTRA_FILES)
CFUNC	= $(CSTAGE:%=ft_%)

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

$(OBJ): $(OBJ_DIR)%.o:$(SRC_DIR)%.c | $(OBJ_DIR)
	@$(CC) -c $(CFLAGS) $(INCLUDE) $(<) -o $(@)
	@$(ECHO) " $(GREEN)$(<)$(CNIL) "

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
#-- BUILD OVERRIDES -------------------|----//--||
W:	BUILD_RULES_STRICT
O:	BUILD_RULES_OPTIMAL
d:	BUILD_RULES_DEBUG
#======|============|==============================================|===========#

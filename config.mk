# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    config.mk                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikarjala <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/18 22:41:30 by ikarjala          #+#    #+#              #
#    Updated: 2023/01/20 16:59:40 by ikarjala         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PRINTF	:= printf
ECHO 	:= echo
TOUCH	:= touch
MKDIR	:= mkdir -p
RM		:= rm -f

OBJ		= $(CFUNC:%=$(OBJ_DIR)/%.o)
INCLUDE	= $(addprefix -I , $(INC_DIR))

CC	:= gcc
LD	:= ar

CFLAGS		= -Wall -Werror -Wextra
CFSTRICT	= -Wimplicit -Wunused -Wconversion
CFOPTIM		= -O3 -flto
CFDEBUG		= -g -fsanitize=address

LDFLAGS 	:= -crs
#=== SPECIAL ==================================================================#
.EXTRA_PREREQS	:=
.DELETE_ON_ERROR = $(NAME) $(OBJ)
.PHONY: norme so BUILD_STRICT BUILD_OPTIMAL BUILD_DEBUG
#=== COLORS ===================================================================#
USECOLOR := 1
ifeq ($(USECOLOR), 1)
CNIL	:=\033[0;0m
RED		:=\033[0;31m
GREEN	:=\033[0;32m
GOLD	:=\033[0;33m
BLUE	:=\033[0;34m
PURPLE	:=\033[0;35m
CYAN	:=\033[0;36m
#-BOLD-|------------|
REDB	:=\033[1;31m
GREENB	:=\033[1;32m
GOLDB	:=\033[1;33m
BLUEB	:=\033[1;34m
PURPLEB	:=\033[1;35m
CYANB	:=\033[1;36m
endif
#=== BUILD MESSAGES ===========================================================#
BMSG_FORM		:= --DEPLOY--
BMSG_PREFIX	:= $(BLUE)$(NAME)$(CNIL) :: 
BMSG_BIN	= "$(BMSG_PREFIX)$(CYANB)Starting $(BMSG_FORM) build$(CNIL)..."
BMSG_CC	= "$(BMSG_PREFIX)$(CNIL)$(CC) $(CFLAGS)"
BMSG_LD	= "$(BMSG_PREFIX)$(PURPLEB)Linking:$(CNIL) $(LD) $(LDFLAGS)$(LIBS)"
BMSG_FIN	= "$(BMSG_PREFIX)$(GREENB)Build success!$(CNIL)"
#=== UTILITIES ================================================================#
CMD_NORME		:= norminette -R CheckForbiddenSourceHeader
PRE_REQUISITE	:= .buildinfo
$(PRE_REQUISITE):
	@$(ECHO)	$(BMSG_BIN)
	@$(ECHO)	$(BMSG_CC)
	@$(TOUCH)	$(PRE_REQUISITE)
norme: $(SRC_DIR) $(INC_DIR)
	@$(CMD_NORME) $(<)
#=== BUILD OVERRIDES ==========================================================#
BUILD_STRICT:	BMSG_FORM := --STRICT--
BUILD_STRICT:	CFLAGS += $(CFSTRICT)
BUILD_STRICT:	re
BUILD_OPTIMAL:	BMSG_FORM := --OPTIMIZED--
BUILD_OPTIMAL:	CFLAGS += $(CFOPTIM)
BUILD_OPTIMAL:	re
BUILD_DEBUG:	BMSG_FORM := --DEBUG--
BUILD_DEBUG:	CFLAGS += $(CFDEBUG)
BUILD_DEBUG:	re
#======|============|==========================================================#

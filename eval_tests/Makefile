# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/30 21:31:17 by ikarjala          #+#    #+#              #
#    Updated: 2022/09/02 15:50:50 by ikarjala         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME       = libftest
BIN        = ./$(NAME)

ROOT		= ..
SRC_DIR		= ./
INC_DIR		= $(ROOT) .
LIB_DIR		= $(ROOT)
LIB			= ft
CFLAGS		= -Wall -Wextra -Werror
DEBUG_FLAGS = -Wimplicit -g
CC			= clang

CFUNC		= \
main

SRC			= $(addprefix $(SRC_DIR),$(addsuffix .c,$(CFUNC)))
OBJ			= $(addprefix $(SRC_DIR),$(addsuffix .o,$(CFUNC)))

INCLUDE		= $(addprefix -I, $(INC_DIR))

TEST_ROOT	= ./unit-tests/
UNIT_TEST	= $(TEST_ROOT)alelievr
MOULI_TEST	= $(TEST_ROOT)moulitest
LIBFTEST	= $(TEST_ROOT)Libftest-old-libft
WSDON_TEST	= $(TEST_ROOT)wsdonnelly

COL_HL		= \x1B[33m
COL_CS		= \x1B[32m
COL_NUL		= \x1B[0m

##	BUILD ====
all: $(NAME)
$(NAME):
	@echo -e '$(COL_HL)' '$(NAME) :: Starting build...' '$(COL_NUL)'
ifeq (,$(wildcard $(addprefix $(LIB_DIR),$(LIB))))
	@echo -e '$(COL_HL)' '[?] No libraries found, trying to build...' '$(COL_NUL)'
	 make -C $(LIB_DIR)
	@echo -e '$(COL_CS)' '$(NAME) :: Build success!' '$(COL_NUL)'
endif
	$(CC) -c $(CFLAGS) $(SRC) $(INCLUDE)
	$(CC) -o $(BIN) $(OBJ) -L$(LIB_DIR) -l $(LIB)
clean:
	rm -f $(OBJ)
	make -C $(LIB_DIR)	clean
fclean: pclean
	rm -f $(OBJ)
	make -C $(LIB_DIR)	fclean
	rm -f $(BIN)
re: fclean all
install: re clean

db: debug
debug: CFLAGS += $(DEBUG_FLAGS)
debug: all

##	TESTS ====
run: fclean
	make -C $(UNIT_TEST)	f
benchmark:
	make -C $(UNIT_TEST)	b
run2: fclean
	make -C $(MOULI_TEST)	libft_bonus
run3: fclean
	cd $(LIBFTEST) && bash grademe.sh
run4: fclean
	make -C $(WSDON_TEST)
	$(WSDON_TEST)/test_ft

norme:
	norminette -R CheckForbiddenSourceHeader $(ROOT)/*.c $(ROOT)/*.h

##	UTILS ====
pclean:
	rm -f $(wildcard $(ROOT)/*.rej)
	rm -f $(wildcard $(ROOT)/*.orig)

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/30 21:31:17 by ikarjala          #+#    #+#              #
#    Updated: 2022/02/02 02:51:05 by ikarjala         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftest
BIN			= ./$(NAME)
ROOT		= ..
SRC_DIR		= ./
CFUNC		= \
main
SRC			= $(addprefix $(SRC_DIR)test_,$(addsuffix .c,$(CFUNC)))
OBJ			= $(addprefix test_,$(addsuffix .o,$(CFUNC)))
INC_DIR		= $(ROOT)
LIB_DIR		= $(ROOT)
LIB			= ft
FLAGS		=
CC			= clang

PATCH_DIR	= patches
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
	$(CC) -c $(FLAGS) $(SRC) -I $(INC_DIR)
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

##	TESTS ====
run: install
	make -C $(UNIT_TEST)	f
benchmark:
	make -C $(UNIT_TEST)	b
run2: install
	make -C $(MOULI_TEST)	libft_bonus
run3: install
	cd $(LIBFTEST) && bash grademe.sh
run4: install
	make -C $(WSDON_TEST)
	$(WSDON_TEST)/test_ft

norme:
	norminette -R CheckForbiddenSourceHeader $(ROOT)/*.c $(ROOT)/*.h

##	PATCHES ====
patch_segv_1:
	make -C $(PATCH_DIR)	patch_segv
patch_segv_0:
	make -C $(PATCH_DIR)	patch_segnull
# ------
patch_hquote_1:
	make -C $(PATCH_DIR)	patch_hquote
patch_hquote_0:
	make -C $(PATCH_DIR)	patch_hangle

pclean:
	rm -f $(wildcard $(ROOT)/*.rej)
	rm -f $(wildcard $(ROOT)/*.orig)

## UTILS ====
define nl


endef
unpack:
	$(foreach f,$(addsuffix .test,$(SRC)),mv $(f) $(basename $(f))${nl})
	mv libftest.h.test libftest.h
pack:
	$(foreach f,$(SRC),mv $(f) $(addsuffix .test,$(f))${nl})
	mv libftest.h libftest.h.test

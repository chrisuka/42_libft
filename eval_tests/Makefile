# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/30 21:31:17 by ikarjala          #+#    #+#              #
#    Updated: 2021/12/16 20:30:03 by ikarjala         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME       = libftest
BIN        = ./$(NAME)
ROOT       = ~/source/repos/vogosphere/libft/
SRC_DIR    = ./
FUNC       = strchr_equ isspace isxdigit sort_bubble swap abs maxint minint
SRC        = main.c $(addprefix test_,$(addsuffix .c,$(FUNC)))
OBJ        = main.o $(addprefix test_,$(addsuffix .o,$(FUNC)))
INC_DIR    = ../
LIB_DIR    = ..
LIB        = ft
FLAGS      = -Wall -Wextra -Werror

UNIT_TEST	= ~/source/repos/vogosphere/libft-unit-test-old/
MOULI_TEST	= ~/source/repos/vogosphere/moulitest/
LIBFTEST	= $(ROOT)/libftest/

##	BUILD ====
all: $(NAME)
$(NAME):
	@echo '$(NAME) :: Starting build...'
	gcc -c	$(FLAGS) $(addprefix $(SRC_DIR),$(SRC)) -I $(INC_DIR)
ifeq (,$(wildcard $(addprefix $(LIB_DIR),$(LIB))))
	@echo '  ! No libraries found, trying to build...'
	cd $(LIB_DIR) && make
endif
	gcc -o	$(BIN) $(OBJ) -L$(LIB_DIR) -l $(LIB)
clean:
	rm -f $(OBJ)
	cd $(LIB_DIR) && make fclean
fclean: clean
	rm -f $(BIN)
re: fclean all
install: all clean

##	TESTS ====
run: install
	cd $(UNIT_TEST) && make f
benchmark: install
	cd $(UNIT_TEST) && ./run_test -b
run2: install
	cd $(MOULI_TEST) && make libft_bonus
run3: install
	cd $(LIBFTEST) && bash grademe.sh
norme:
	norminette -R CheckForbiddenSourceHeader ../*.c ../*.h

##	PATCHES ====
patch_segv:
	cd patches && make patch_segv
patch_segnull:
	cd patches && make patch_segnull

## UTILS
define nl


endef
unpack:
	$(foreach f,$(addsuffix .test,$(SRC)),mv $(f) $(basename $(f))${nl})
	mv libftest.h.test libftest.h
pack:
	$(foreach f,$(SRC),mv $(f) $(addsuffix .test,$(f))${nl})
	mv libftest.h libftest.h.test

gen_gitignore:
	@echo '\
	**\n\
	!ft_*.c\n\
	!./libft.h\n\
	!./author\n\
	!./Makefile\n\
	!eval_tests/\n\
	!eval_tests/*.c.test\n\
	!eval_tests/*.h.test\n\
	!eval_tests/Makefile\n\
	!eval_tests/patches/\n\
	!eval_tests/patches/**'\
	> $(ROOT).gitignore
	@echo 'wrote to gitignore file.'

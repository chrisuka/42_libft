# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/14 21:37:03 by ikarjala          #+#    #+#              #
#    Updated: 2021/12/17 17:09:52 by ikarjala         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

UNIT_TEST	= ~/source/repos/vogosphere/libft-unit-test-old/
MOULI_TEST	= ~/source/repos/vogosphere/moulitest/

SRC_DIR		= ~/source/repos/vogosphere/libft/
F_SEG		= strcpy strdup strlcat strncpy strnstr strstr
F_HEADER	= $(wildcard $(addprefix $(SRC_DIR),*.c))

PATCH_DIR	= ~/source/repos/vogosphere/libft/eval_tests/patches/
P_SEGV		= $(PATCH_DIR)segv/
CMD_P_SEGV	= $(foreach f,$(F_SEG),patch -N  $(SRC_DIR)ft_$(f).c $(P_SEGV)ft_$(f).patch.segv;)
CMD_P_SEGN	= $(foreach f,$(F_SEG),patch -NR $(SRC_DIR)ft_$(f).c $(P_SEGV)ft_$(f).patch.segv;)

P_HANG		= $(PATCH_DIR)hangle/
CMD_P_HANG	= $(foreach f,$(F_HEADER),patch -N  $(f) $(P_HANG)allc.patch.hangle;)
CMD_P_HQUO	= $(foreach f,$(F_HEADER),patch -NR $(f) $(P_HANG)allc.patch.hangle;)

patch_segv:
	@echo ":: PATCHING: segv will not be protected against"
	cd $(SRC_DIR) && sh -c '$(CMD_P_SEGV)'
	@echo "patching success!"
patch_segnull:
	@echo ":: PATCHING: null input will cause segv"
	cd $(SRC_DIR) && sh -c '$(CMD_P_SEGN)'
	@echo "patching success!"
# ------
patch_hangle:
	@echo ":: PATCHING: C files will include header with angle brackets"
	cd $(SRC_DIR) && sh -c '$(CMD_P_HANG)'
	@echo "patching success!"
patch_hquote:
	@echo ":: PATCHING: C files will include header with double quotes"
	cd $(SRC_DIR) && sh -c '$(CMD_P_HQUO)'
	@echo "patching success!"

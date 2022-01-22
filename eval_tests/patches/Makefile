# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/14 21:37:03 by ikarjala          #+#    #+#              #
#    Updated: 2021/12/17 17:43:56 by ikarjala         ###   ########.fr        #
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

COL_HL		= \x1B[33m
COL_CS		= \x1B[32m
COL_NUL		= \x1B[0m

MSG_PATCH	= echo -e '$(COL_HL):: PATCHING: '
MSG_PATCH_S	= echo -e '$(COL_CS) patching success! $(COL_NUL)'

patch_segv:
	@$(MSG_PATCH) 'segv will not be protected against' '$(COL_NUL)'
	cd $(SRC_DIR) && sh -c '$(CMD_P_SEGV)'
	@$(MSG_PATCH_S)
patch_segnull:
	@$(MSG_PATCH) 'null input will cause segv' '$(COL_NUL)'
	cd $(SRC_DIR) && sh -c '$(CMD_P_SEGN)'
	@$(MSG_PATCH_S)
# ------
patch_hangle:
	@$(MSG_PATCH) 'C files will include header with angle brackets' '$(COL_NUL)'
	cd $(SRC_DIR) && sh -c '$(CMD_P_HANG)'
	@$(MSG_PATCH_S)
patch_hquote:
	@$(MSG_PATCH) 'C files will include header with double quotes' '$(COL_NUL)'
	cd $(SRC_DIR) && sh -c '$(CMD_P_HQUO)'
	@$(MSG_PATCH_S)

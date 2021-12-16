# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/14 21:37:03 by ikarjala          #+#    #+#              #
#    Updated: 2021/12/14 21:47:15 by ikarjala         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

UNIT_TEST	= ~/source/repos/vogosphere/libft-unit-test-old/
MOULI_TEST	= ~/source/repos/vogosphere/moulitest/

FILES		= strcpy strdup strlcat strncpy strnstr strstr
SRC_DIR		= ~/source/repos/vogosphere/libft/
P_SEGV		= ~/source/repos/vogosphere/libft/eval_tests/patches/segv/
CMD_P_SEGV	= $(foreach f,$(FILES),patch -N  $(SRC_DIR)ft_$(f).c $(P_SEGV)ft_$(f).patch.segv;)
CMD_P_SEGN	= $(foreach f,$(FILES),patch -NR $(SRC_DIR)ft_$(f).c $(P_SEGV)ft_$(f).patch.segv;)

patch_segv:
	@echo ":: PATCHING: segv will not be protected against"
	cd $(SRC_DIR) && sh -c '$(CMD_P_SEGV)'

patch_segnull:
	@echo ":: PATCHING: null input will cause segv"
	cd $(SRC_DIR) && sh -c '$(CMD_P_SEGN)'

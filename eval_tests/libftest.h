/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftest.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 21:48:04 by ikarjala          #+#    #+#             */
/*   Updated: 2021/12/17 20:06:57 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTEST_H
# define LIBFTEST_H
#include <libft.h>
#include <stdio.h>
#include <limits.h>
#include <strings.h>
#include <ctype.h>
#include <time.h>
#include <math.h>

#define col_nul	"\x1B[0m"
#define col_swp	"\x1B[34m"
#define col_err	"\x1B[31m"
#define col_gre	"\x1B[32m"

void	test_strchr_equ_unit(void);
void	test_swap_batch(size_t iter);
void	test_sort_bubble_batch(size_t iter, size_t size);

#endif

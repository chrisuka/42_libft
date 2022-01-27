/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_log10.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 03:36:29 by ikarjala          #+#    #+#             */
/*   Updated: 2022/01/27 03:36:31 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_log10(int n)
{
	const int	bs_table[9] = {
		1000000000, 100000000, 10000000, 1000000, 100000, 10000, 1000, 100, 10};
	const int	rv_table[9] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	int			i;

	i = 0;
	while (n < bs_table[i])
		i++;
	return (rv_table[i]);
}

// norminette will likely not approve :o
// todo: figure out how to rearrange these tables for binary search

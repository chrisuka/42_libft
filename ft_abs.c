/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 20:48:14 by ikarjala          #+#    #+#             */
/*   Updated: 2022/02/11 01:19:15 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_abs(int n)
{
	int	mask;

	mask = n >> 31;
	return ((n + mask) ^ mask);
}

/*
** bitshifting >> sizeof(n) * CHAR_BIT - 1 will produce
** 			all 0s or all 1s depending on the signing bit
** XORing ^ a number with 0 will yield the orig nb
**        XORing it with -1 will yield its inverse
*/

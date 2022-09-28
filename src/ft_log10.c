/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_log10.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 03:36:29 by ikarjala          #+#    #+#             */
/*   Updated: 2022/09/28 20:45:16 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_log10(unsigned long long n)
{
	int							nu;
	const unsigned long long	pow[] = {
		1e1, 1e2, 1e3, 1e4, 1e5, 1e6, 1e7, 1e8, 1e9, 1e10,
		1e11, 1e12, 1e13, 1e14, 1e15, 1e16, 1e17, 1e18, 1e19};

	nu = (int)(sizeof(pow) / sizeof(unsigned long long));
	while (--nu)
	{
		if (n < pow[nu])
			break ;
	}
	return (nu);
}

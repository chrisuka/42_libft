/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:00:28 by ikarjala          #+#    #+#             */
/*   Updated: 2022/05/12 01:17:07 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	uint64_t	*dword_p;
	uint64_t	dword;
	uint8_t		uchr;
	uint8_t		i;

	uchr = (unsigned char)c;
	if (len > 8)
	{
		dword = (uint64_t)uchr;
		i = 1;
		while (i < sizeof(dword))
		{
			dword |= (dword << i);
			i <<= 1;
		}
		dword_p = &b[n];
		while (len >= 8)
		{
			len -= 8;
			*(--dword_p) = dword;
		}
	}
	while (len-- > 0)
		((unsigned char *)b)[len] = uchr;
	return (b);
}

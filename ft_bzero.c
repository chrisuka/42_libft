/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:31:06 by ikarjala          #+#    #+#             */
/*   Updated: 2022/05/12 01:15:42 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	uint64_t	*dword_p;

	dword_p = &s[n];
	while (n >= 8)
	{
		n -= 8;
		*(--dword_p) = 0x0ULL;
	}
	while (n-- > 0)
		((unsigned char *)s)[n] = 0;
}

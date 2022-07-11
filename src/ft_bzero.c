/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:31:06 by ikarjala          #+#    #+#             */
/*   Updated: 2022/06/07 14:04:49 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	uint64_t	*dword_p;

	dword_p = &s[n];
	while (n >= sizeof(dword_p))
	{
		n -= sizeof(dword_p);
		*(--dword_p) = 0x0ULL;
	}
	while (n-- > 0)
		((unsigned char *)s)[n] = 0;
}

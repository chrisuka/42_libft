/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:31:06 by ikarjala          #+#    #+#             */
/*   Updated: 2022/09/02 19:25:19 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Zero out the memory area pointed to by s, iterating up to 8 bytes per step.
*/
void	ft_bzero(void *s, size_t n)
{
	uint64_t	*quadp;

	quadp = (uint64_t *)(s + n);
	while (n >= sizeof(quadp))
	{
		n -= sizeof(quadp);
		*(--quadp) = 0x0ULL;
	}
	while (n-- > 0)
		((unsigned char *)(s))[n] = 0;
}

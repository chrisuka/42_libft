/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 09:00:26 by ikarjala          #+#    #+#             */
/*   Updated: 2021/12/16 17:48:09 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	if (n == 0)
		return (NULL);
	if (dst == NULL && src == NULL)
		return (NULL);
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	while (n-- > 0)
	{
		*d = *s;
		if (*d == (unsigned char)c)
			return (++d);
		s++;
		d++;
	}
	return (NULL);
}

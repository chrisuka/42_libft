/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 09:00:26 by ikarjala          #+#    #+#             */
/*   Updated: 2021/11/14 10:26:21 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memccpy(void *dst, void *src, int c, size_t n)
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
		if ((unsigned char)*d == (unsigned char)c)
			return ((unsigned char *)++d);
		*d = (unsigned char)*s;
		s++;
		d++;
	}
	return (NULL);
}

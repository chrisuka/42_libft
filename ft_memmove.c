/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 11:09:36 by ikarjala          #+#    #+#             */
/*   Updated: 2021/11/14 11:09:55 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	if (len == 0)
		return (dst);
	if (dst == NULL && src == NULL)
		return (NULL);
	while (--len > 0)
		((char *)dst)[len] = ((char *)src)[len];
	((char *)dst)[0] = ((char *)src)[0];
	return (dst);
}

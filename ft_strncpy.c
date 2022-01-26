/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 15:58:17 by ikarjala          #+#    #+#             */
/*   Updated: 2021/11/18 19:30:05 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*p_dst;

	if (!dst || !src)
		return (NULL);
	p_dst = dst;
	while (*src != '\0' && len-- > 0)
		*p_dst++ = *src++;
	while (len-- > 0)
		*p_dst++ = '\0';
	return (dst);
}

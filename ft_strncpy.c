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
	char	*pd;
	char	*ps;

	if (!dst || !src)
		return (NULL);
	if (!dst || !src)
		return (NULL);
	pd = dst;
	ps = (char *)src;
	while (len-- > 0 && *ps != '\0')
		*pd++ = *ps++;
	len++;
	while (len-- > 0)
		*pd++ = '\0';
	return (dst);
}

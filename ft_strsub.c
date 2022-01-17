/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:46:51 by ikarjala          #+#    #+#             */
/*   Updated: 2022/01/17 17:44:41 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*pstart;
	size_t	i;

	if (!s)
		return (NULL);
	sub = (char *)ft_memalloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	if (start >= ft_strlen((char *)s))
		return (sub);
	pstart = (char *)(s + start);
	i = -1;
	while (++i < len)
		sub[i] = pstart[i];
	return (sub);
}

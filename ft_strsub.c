/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:46:51 by ikarjala          #+#    #+#             */
/*   Updated: 2021/11/28 12:25:36 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*pstart;
	size_t	i;

	if (!s)
		return (NULL);
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	if (start >= ft_strlen((char *)s))
		return (sub);
	pstart = (char *)(s + start);
	i = -1;
	while (++i < len)
		sub[i] = pstart[i];
	sub[len] = 0;
	return (sub);
}

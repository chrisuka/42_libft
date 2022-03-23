/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 11:04:07 by ikarjala          #+#    #+#             */
/*   Updated: 2021/12/15 20:50:47 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*ft_get_delims(void)
{
	return (" \n\t");
}

char	*ft_strtrim(const char *s)
{
	char	*fresh;
	char	*p_beg;
	char	*p_end;
	size_t	len;

	if (!s)
		return (NULL);
	len = 0;
	p_beg = ft_strword(s, ft_get_delims(), &len);
	p_end = p_beg + len;
	while (*p_end != '\0')
		p_end = ft_strword(p_end, ft_get_delims(), &len) + len;
	fresh = ft_strsub(s, (t_uint)(p_beg - s), (size_t)(p_end - p_beg + 1));
	if (!fresh)
		return (NULL);
	return (fresh);
}

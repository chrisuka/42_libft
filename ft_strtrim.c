/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 11:04:07 by ikarjala          #+#    #+#             */
/*   Updated: 2021/12/15 17:44:28 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	ft_isdelim(int c)
{
	const char	*delim_lst = " \n\t";
	while (*delim_lst != '\0')
		if (*delim_lst++ == c)
			return (FT_TRUE);
	return (FT_FALSE);
}

char	*ft_strtrim(const char *s)
{
	char	*fresh;
	char	*p_beg;
	char	*p_end;

	if (!s)
		return (NULL);
	p_beg = (char *)s;
	while (ft_isdelim(*p_beg))
		p_beg++;
	p_end = p_beg;
	while (*p_end != 0)
		p_end++;
	if (p_beg == p_end)
		return (ft_strsub(s, 0, 0));
	else
		while (ft_isdelim(*--p_end))
			continue ;
	fresh = ft_strsub(s, p_beg - s, p_end - p_beg + 1);
	if (!fresh)
		return (NULL);
	return (fresh);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:19:17 by ikarjala          #+#    #+#             */
/*   Updated: 2021/11/24 18:06:50by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strtrim(const char *s)
{
	char	*fresh;
	char	*p_beg;
	char	*p_itr;
	char	*p_end;

	if (!s || *s == 0)
		return (NULL);
	p_beg = (char *)s;
	while (ft_isspace(*p_beg))
		p_beg++;
	p_itr = p_beg - 1;
	p_end = p_beg;
	while (++p_itr != 0)
		if (!ft_isspace(*p_itr))
			p_end = p_itr;
	fresh = (char *)malloc(sizeof(char) * (p_itr - p_beg) + 1);
	if (!fresh)
		return (NULL);
	p_itr = fresh;
	while (p_beg <= p_end)
		*p_itr++ = p_beg++;
	// last element to 0
	return (fresh);
}

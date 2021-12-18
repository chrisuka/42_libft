/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strword.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 21:25:43 by ikarjala          #+#    #+#             */
/*   Updated: 2021/12/17 21:41:32 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strword(const char *s, const char *delim, size_t *lenout)
{
	*lenout = 0;
	if (!s)
		return (NULL);
	while (ft_strchr_equ(delim, *s))
		s++;
	while (s[*lenout] != '\0' && !ft_strchr_equ(delim, s[*lenout]))
		(*lenout)++;
	return ((char *)s);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_equ.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:16:01 by ikarjala          #+#    #+#             */
/*   Updated: 2021/12/17 22:16:26 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strchr_equ(const char *s, int c)
{
	if (!s)
		return (-1);
	if (c == '\0')
		return (FT_TRUE);
	while (*s != '\0')
		if (*s++ == c)
			return (FT_TRUE);
	return (FT_FALSE);
}

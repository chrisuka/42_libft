/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_equ.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:16:01 by ikarjala          #+#    #+#             */
/*   Updated: 2021/12/15 19:33:22 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_strchr_equ(const char *s, int c)
{
	if (!s)
		return (-1);
	while (s != '\0')
		if (*s++ == c)
			return (FT_TRUE);
	return (FT_FALSE);
}

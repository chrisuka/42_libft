/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_haschr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:16:01 by ikarjala          #+#    #+#             */
/*   Updated: 2021/12/01 16:47:35 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_haschr(int c, const char *str)
{
	if (!str)
		return (-1);
	while (str != '\0')
		if (*str++ == c)
			return (FT_TRUE);
	return (FT_FALSE);
}

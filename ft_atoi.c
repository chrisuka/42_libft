/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:41:21 by ikarjala          #+#    #+#             */
/*   Updated: 2021/11/09 18:51:47 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_atoi(const char *str)
{
	int		nb;
	int		mul;
	int		sign;
	char	*ptr;
	char	*mark;

	ptr = (char *)str;
	while (ft_isspace(*ptr))
		ptr++;
	if (!(ft_isdigit(*ptr) || *ptr == '-' || *ptr == '+'))
		return (0);
	sign = -(*ptr == '-') | 1;
	ptr += !(ft_isdigit(*ptr));
	while (*ptr == '0')
		ptr++;
	mark = ptr;
	while (ft_isdigit(*ptr))
		ptr++;
	nb = 0;
	mul = 1;
	while (--ptr >= mark)
	{
		nb += (*ptr - '0') * sign * mul;
		mul *= 10;
	}
	return (nb);
}

/*
** 'reminder: you are a dumbass and cannot code'
** '42  -> 40 + 2'
** 'NOT -> 4 + 20'
** only works for itoa
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:41:21 by ikarjala          #+#    #+#             */
/*   Updated: 2021/11/07 22:34:21 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_atoi(const char *str)
{
	int		nb;
	int		mul;
	int		sign;
	char	*ptr;

	ptr = (char *)str;
	while (ft_isspace(*ptr))
		if (*ptr++ == '\0')
			return (0);
	nb = 0;
	mul = 1;
	sign = -(*ptr == '-') | 1;
	while (ft_isdigit(*++ptr))
		nb += (*ptr - '0') * sign * mul++;
	return (nb);
}

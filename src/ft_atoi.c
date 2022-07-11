/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:59:37 by ikarjala          #+#    #+#             */
/*   Updated: 2021/11/30 08:09:50 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		nb;
	int		sign;
	char	*ptr;

	ptr = (char *)str;
	while (ft_isspace(*ptr))
		ptr++;
	if (!(ft_isdigit(*ptr) || *ptr == '-' || *ptr == '+'))
		return (0);
	sign = -(*ptr == '-') | 1;
	ptr += !ft_isdigit(*ptr);
	nb = 0;
	while (*ptr == '0')
		ptr++;
	while (ft_isdigit(*ptr))
		nb = nb * 10 + (*ptr++ - '0');
	return (nb * sign);
}

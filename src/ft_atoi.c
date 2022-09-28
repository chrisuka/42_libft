/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:59:37 by ikarjala          #+#    #+#             */
/*   Updated: 2022/09/28 21:12:16 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		nb;
	int		sign;
	char	*cp;

	cp = (char *)(str);
	while (ft_isspace(*cp))
		cp++;
	if (!(ft_isdigit(*cp) || *cp == '-' || *cp == '+'))
		return (0);
	sign = ft_bool2sign(*cp != '-');
	cp += !ft_isdigit(*cp);
	nb = 0;
	while (*cp == '0')
		cp++;
	while (ft_isdigit(*cp))
		nb = nb * 10 + (*cp++ - '0');
	return (nb * sign);
}

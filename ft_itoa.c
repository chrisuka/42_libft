/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 19:16:51 by ikarjala          #+#    #+#             */
/*   Updated: 2021/11/30 20:02:12 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	ft_idigits(int n)
{
	int	dgt;

	dgt = 1;
	n /= 10;
	while (n != 0)
	{
		dgt++;
		n /= 10;
	}
	return (dgt);
}

char	*ft_itoa(int n)
{
	signed char	neg;
	char		*str;
	int			dgt;

	dgt = ft_idigits(n);
	neg = n < 0;
	str = (char *)malloc(sizeof(char) * (dgt + 1 + neg));
	if (!str)
		return (NULL);
	*str = '-';
	str += dgt + neg;
	*str = '\0';
	*--str = (1 | -neg) * (n % 10) + '0';
	n /= (1 | -neg) * 10;
	while (n != 0)
	{
		*--str = n % 10 + '0';
		n /= 10;
	}
	return (str - neg);
}

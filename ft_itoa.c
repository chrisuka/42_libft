/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 19:16:51 by ikarjala          #+#    #+#             */
/*   Updated: 2021/11/14 11:09:13 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	ft_idigits(int n)
{
	int	dgt;

	dgt = 1;
	while (n > 0)
	{
		dgt++;
		n /= 10;
	}
	return (dgt);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		dgt;

	dgt = ft_idigits(n);
	str = (char *)malloc(sizeof(char) * (dgt + 2));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		*str = '-';
		n = -n;
	}
	str += dgt + 1;
	*str = '\0';
	while (n > 0)
	{
		*--str = n % 10 + '0';
		n /= 10;
	}
	return (str);
}

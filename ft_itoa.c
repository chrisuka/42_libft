/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 19:16:51 by ikarjala          #+#    #+#             */
/*   Updated: 2021/12/16 20:41:46 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		c_digits;
	t_bool	is_ltz;
	t_bool	ltz_mul;

	c_digits = ft_nbr_len(n);
	is_ltz = n < 0;
	str = (char *)malloc(sizeof(char) * (size_t)(c_digits + 1 + is_ltz));
	if (!str)
		return (NULL);
	*str = '-';
	str += c_digits + is_ltz;
	*str = '\0';
	ltz_mul = (t_bool)(1 | -is_ltz);
	*--str = (char)(ltz_mul * (n % 10) + '0');
	n /= ltz_mul * 10;
	while (n != 0)
	{
		*--str = (char)(n % 10 + '0');
		n /= 10;
	}
	return (str - is_ltz);
}

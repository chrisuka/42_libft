/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 19:05:20 by ikarjala          #+#    #+#             */
/*   Updated: 2022/04/09 17:27:16 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		pow;
	int		div;
	char	c;
	t_bool	ltz;

	ltz = n < 0;
	write(fd, "-", ltz);
	pow = ft_log10(n);
	div = ft_pow(10, pow) * (1 | -ltz);
	while (pow-- >= 0)
	{
		c = (char)(n / div % 10 + '0');
		write(fd, &c, 1);
		div /= 10;
	}
}

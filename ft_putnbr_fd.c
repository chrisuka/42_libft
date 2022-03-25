/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 19:05:20 by ikarjala          #+#    #+#             */
/*   Updated: 2022/03/25 19:07:48 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	pow;
	int	div;

	if (n < 0)
		write(fd, "-", 1);
	pow = ft_log10(n);
	div = ft_pow(10, pow);
	while (pow-- > 0)
	{
		ft_putchar_fd((char)(n / div % 10 + '0'), fd);
		div /= 10;
	}
}

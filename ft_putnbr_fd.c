/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 23:04:24 by ikarjala          #+#    #+#             */
/*   Updated: 2021/11/18 16:19:20 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_putnbr_fd(int n, int fd)
{
	size_t	div;

	if (n == FT_INT_MAX)
		return ((void)write(fd, "2147483647", 10));
	if (n == FT_INT_MIN)
		return ((void)write(fd, "-2147483648", 11));
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n == 0)
		write(fd, "0", 1);
	div = 1;
	while (n / div > 0)
		div *= 10;
	while (div > 1)
	{
		div /= 10;
		ft_putchar_fd(n / div % 10 + '0', fd);
	}
}

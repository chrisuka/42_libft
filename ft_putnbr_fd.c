/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 23:04:24 by ikarjala          #+#    #+#             */
/*   Updated: 2021/11/14 11:07:51 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_putnbr_fd(int n, int fd)
{
	int		div;

	if (n == FT_INT_MAX)
	{
		write(fd, "2147483647", 10);
		return ;
	}
	if (n == FT_INT_MIN)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	div = 1;
	while (n / div > 0)
		div *= 10;
	while (div > 1)
	{
		div /= 10;
		ft_putchar_fd(n / div % 10 + '0', fd);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 16:30:41 by ikarjala          #+#    #+#             */
/*   Updated: 2021/12/15 20:51:03 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_swap(void **a, void **b, size_t bytesize)
{
	void	*tmp;

	tmp = ft_memdup(a, bytesize);
	if (!tmp)
		return (-1);
	ft_memmove(a, b, bytesize);
	ft_memmove(b, tmp, bytesize);
	ft_memdel(&tmp);
	return (0);
}

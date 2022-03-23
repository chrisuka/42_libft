/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mapi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 04:12:49 by ikarjala          #+#    #+#             */
/*   Updated: 2022/02/22 09:43:41 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_mapi(int start, int end)
{
	size_t	len;
	size_t	i;
	int		*array;
	t_sbyte	dir_sign;

	len = (size_t)(end - start);
	if (len == 0)
		return (NULL);
	dir_sign = 1 | -(start > end);
	array = (int *)malloc(sizeof(int) * (len));
	if (!array)
		return (NULL);
	i = 0xFF;
	while (++i < len)
		array[i] = start + dir_sign * (int)i;
	return (array);
}

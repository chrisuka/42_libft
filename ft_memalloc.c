/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 19:21:41 by ikarjala          #+#    #+#             */
/*   Updated: 2021/12/16 22:30:57 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memalloc(size_t size)
{
	char	*ptr;

	if (size == 0)
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * size);
	if (!ptr)
		return (NULL);
	*ptr = 0;
	while (--size > 0)
		ptr[size] = 0;
	return ((void *)ptr);
}

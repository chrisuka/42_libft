/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:34:46 by ikarjala          #+#    #+#             */
/*   Updated: 2021/11/12 17:54:54y ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memset(void *b, int c, size_t len)
{
	if (len == 0)
		return (b);
	while (--len > 0)
		((char *)b)[len] = (unsigned char)c;
	((char *)b)[0] = (unsigned char)c;
	return (b);
}

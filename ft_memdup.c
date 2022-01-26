/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:35:04 by ikarjala          #+#    #+#             */
/*   Updated: 2021/12/14 18:33:28 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memdup(const void *s1, size_t len)
{
	char	*fresh;
	size_t	i;

	if (!s1 || len == 0)
		return (NULL);
	fresh = malloc(sizeof(char) * (len + 1));
	if (!fresh)
		return (NULL);
	i = FT_SIZE_T_MAX;
	while (++i < len)
		fresh[i] = ((char *)s1)[i];
	fresh[i] = 0;
	return ((void *)fresh);
}

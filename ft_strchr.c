/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:49:36 by ikarjala          #+#    #+#             */
/*   Updated: 2021/11/12 18:31:19 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)(s - 1);
	while (*++ptr != c)
		if (*ptr == '\0')
			return (NULL);
	return (ptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:59:31 by ikarjala          #+#    #+#             */
/*   Updated: 2021/11/14 10:31:23 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	*last;

	if (*s == '\0')
		return (NULL);
	ptr = (char *)(s - 1);
	last = NULL;
	while (*++ptr != '\0')
		if (*ptr == c)
			last = ptr;
	if (c == '\0')
		return (ptr);
	if (last == NULL)
		return (NULL);
	return ((char *)last);
}

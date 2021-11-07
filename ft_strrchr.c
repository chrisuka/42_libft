/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:59:31 by ikarjala          #+#    #+#             */
/*   Updated: 2021/11/07 19:09:56 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	*last;

	ptr = (char *)s;
	last = NULL;
	while (*ptr != '\0')
		if (*ptr++ == c)
			last = ptr;
	return (last);
}

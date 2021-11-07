/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 19:32:42 by ikarjala          #+#    #+#             */
/*   Updated: 2021/11/07 20:07:54 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	int sweep;
	int probe;

	if (needle[0] == '\0')
		return ((char *)haystack);
	sweep = -1;
	while (haystack[++sweep] != '\0')
	{
		probe = sweep - 1;
		while (haystack[probe] == needle[probe])
			if (haystack[++probe] == '\0')
				return ((char *)&haystack[probe]);
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 19:32:42 by ikarjala          #+#    #+#             */
/*   Updated: 2021/11/11 21:39:04 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	sweep;
	size_t	probe;

	if (*needle == '\0')
		return ((char *)haystack);
	sweep = -1;
	while (haystack[++sweep] != '\0')
	{
		probe = sweep;
		while (haystack[probe] == needle[probe])
		{
			if (haystack[probe] == '\0')
				return ((char *)&haystack[probe]);
			probe++;
		}
		sweep++;
	}
	return (NULL);
}

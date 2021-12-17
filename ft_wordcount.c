/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 22:21:36 by ikarjala          #+#    #+#             */
/*   Updated: 2021/12/17 22:22:16 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_wordcount(const char *s, const char *del)
{
	size_t	wc;
	size_t	len;

	if (!s)
		return (0);
	wc = 0;
	len = 0;
	while (*s != '\0')
	{
		s = (const char *)(ft_strword(s, del, &len) + len);
		wc += (len != 0);
	}
	return (wc);
}

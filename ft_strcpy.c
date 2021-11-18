/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:44:18 by ikarjala          #+#    #+#             */
/*   Updated: 2021/11/18 15:03:10 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strcpy(char *dst, const char *src)
{
	char	*pd;
	char	*ps;

	if (!dst || !src)
		return (NULL);
	pd = dst;
	ps = (char *)src;
	while (*ps != '\0')
		*pd++ = *ps++;
	*pd = '\0';
	return (dst);
}

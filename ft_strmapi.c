/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 09:11:44 by ikarjala          #+#    #+#             */
/*   Updated: 2021/11/24 09:12:28 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*new;
	t_uint	i;

	if (!s || !f)
		return (NULL);
	i = (t_uint)ft_strlen(s) + 1;
	new = (char *)malloc(sizeof(char) * i);
	if (!new)
		return (NULL);
	while (--i > 0)
		new[i] = f(i, s[i]);
	return (new);
}

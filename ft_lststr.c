/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lststr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 19:31:49 by ikarjala          #+#    #+#             */
/*   Updated: 2022/03/23 19:31:59 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_lststr(t_list *lst)
{
	size_t	len;
	char	*str;

	len = lst_contentlen(lst);
	if (len == 0)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = 0;
	len = 0;
	while (lst)
	{
		ft_memmove(&(str[len]), lst->content, lst->content_size);
		len += lst->content_size;
		lst = lst->next;
	}
	return (str);
}

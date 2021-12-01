/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:09:03 by ikarjala          #+#    #+#             */
/*   Updated: 2021/12/01 15:18:39 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list	*ft_lstnew(const void *content, size_t content_size)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	if (!content)
	{
		content = NULL;
		content_size = 0;
	}
	new->content = malloc(content_size);
	if (!new->content)
	{
		free(new->content);
		free(new);
		return (NULL);
	}
	new->content = (void *)content;
	new->content_size = content_size;
	new->next = NULL;
	return (new);
}

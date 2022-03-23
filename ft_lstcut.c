/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcut.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 19:28:53 by ikarjala          #+#    #+#             */
/*   Updated: 2022/03/23 19:29:55by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstcut(t_list **alst, size_t start, size_t count,
	void (*del)(void *, size_t))
{
	t_list	*head;
	t_list	*tail;
	t_list	*temp;
	size_t	index;

	if (count == 0 || !alst)
		return (-1);
	head = *alst;
	index = 0;
	while (++index < start)
	{
		if (!head)
			return (-1);
		head = head->next;
	}
	tail = head->next;
	if (start == 0)
		tail = head;
	while (count-- > 0 && tail)
	{
		temp = tail->next;
		del(tail->content, tail->content_size);
		free(tail);
		tail = temp;
	}
	head->next = tail;
	if (start == 0)
		*alst = tail;
	return (0);
}

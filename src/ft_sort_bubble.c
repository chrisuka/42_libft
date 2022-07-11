/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_bubble.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 23:29:55 by ikarjala          #+#    #+#             */
/*   Updated: 2021/12/15 23:29:56 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sort_bubble(void *tab, size_t len,
			int (*cmpf)(void **, void **), size_t bs)
{
	size_t	i;
	int		sorted;

	if (!tab || len < 2)
		return ;
	sorted = FT_FALSE;
	while (!sorted)
	{
		sorted = FT_TRUE;
		i = bs;
		while (i < len * bs)
		{
			if (cmpf(tab + i - bs, tab + i))
			{
				sorted = FT_FALSE;
				ft_swap(tab + i - bs, tab + i, bs);
			}
			i += bs;
		}
	}
}

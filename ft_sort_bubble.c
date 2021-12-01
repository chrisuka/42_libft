/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_bubble.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:25:16 by ikarjala          #+#    #+#             */
/*   Updated: 2021/12/01 16:44:08 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_sort_bubble(void *tab, size_t len, int (*cmpf)(void *, void *))
{
	size_t	i;
	int		sorted;

	if (!tab || len < 2)
		return ;
	sorted = FT_FALSE;
	while (!sorted)
	{
		sorted = FT_TRUE;
		i = 1;
		while (i < len)
		{
			if (cmpf(&tab[i - 1], &tab[i]))
			{
				sorted = FT_FALSE;
				ft_swap(&tab[i - 1], &tab[i]);
			}
			i++;
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 16:30:12 by ikarjala          #+#    #+#             */
/*   Updated: 2021/12/17 22:23:29 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static void	ft_delarray(void ***array, size_t len)
{
	ft_aiter(array, len, &ft_memdel, sizeof(char *));
	free(array);
	array = NULL;
}

char	**ft_strsplit(const char *s, char c)
{
	char	**array;
	char	del[2];
	size_t	a_wc;
	size_t	a_itr;
	size_t	len;

	if (!s)
		return (NULL);
	del[0] = c;
	a_wc = ft_wordcount(s, del);
	array = (char **)malloc(sizeof(char *) * (a_wc + 1));
	if (!array)
		return (NULL);
	array[a_wc] = 0;
	len = 0;
	a_itr = -1;
	while (++a_itr < a_wc)
	{
		s = ft_strword(s, del, &len);
		array[a_itr] = (char *)ft_memdup(s, len);
		if (!array[a_itr])
			ft_delarray((void ***)&array, a_itr);
		s += len;
	}
	return (array);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 12:29:31 by ikarjala          #+#    #+#             */
/*   Updated: 2021/11/28 14:18:04 ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	**ft_strsplit(char const *s, char c)
{
	char	**array;
	char	*a_itr;
	char	*p_itr;
	char	*p_rev;
	size_t	a_wc;

	if (!s)
		return (NULL);
	a_wc = 1;
	p_itr = (char *)s;
	while (*p_itr != 0)
		a_wc += *p_itr++ == c;
	array = (char **)malloc(sizeof(char *) * (a_wc + 1));
	array[a_wc] = 0;
	while (--a_wc != (size_t)-1)
	{
		p_rev = --p_itr;
		while (*p_rev != c && p_rev >= s)
			p_rev--;
		array[a_wc] = (char *)malloc(sizeof(char) * (p_itr - p_rev + 1));
		a_itr = array[a_wc] + (p_itr - p_rev);
		*a_itr-- = 0;
		while (p_rev < p_itr)
			*a_itr-- = *p_itr--;
	}
	return (array);
}

// first pass: count number of words to split and malloc array
// second pass: copy strings into appropriate slots

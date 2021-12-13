/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 16:30:12 by ikarjala          #+#    #+#             */
/*   Updated: 2021/12/13 17:32:42 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static	char	*ft_strword(const char *s, char c, size_t *lenout)
{
	*lenout = 0;
	if (!s)
		return (NULL);
	while (*s == c)
		s++;
	while (s[*lenout] != c && s[*lenout] != '\0')
		(*lenout)++;
	return ((char *)s);
}

static size_t	ft_count_words(const char *s, char c)
{
	size_t	wc;
	size_t	len;

	if (!s)
		return (0);
	wc = 0;
	len = 0;
	while (*s != '\0')
	{
		s = (const char *)(ft_strword(s, c, &len) + len);
		wc += (len != 0);
	}
	return (wc);
}

static void	ft_delarray(void ***array, size_t len)
{
	size_t	i;

	if (!array)
		return ;
	i = 0;
	while (i < len)
		ft_memdel(array[i]);
	free(array);
	array = NULL;
}

char	**ft_strsplit(const char *s, char c)
{
	char	**array;
	char	*p_itr;
	size_t	a_wc;
	size_t	a_itr;
	size_t	len;

	if (!s)
		return (NULL);
	a_wc = ft_count_words(s, c);
	array = (char **)malloc(sizeof(char *) * (a_wc + 1));
	if (!array)
		return (NULL);
	array[a_wc] = 0;
	len = 0;
	p_itr = (char *)s;
	a_itr = -1;
	while (++a_itr < a_wc)
	{
		p_itr = ft_strword(p_itr, c, &len);
		array[a_itr] = (char *)ft_memdup(p_itr, len);
		if (!array[a_itr])
			ft_delarray((void ***)&array, a_wc);
		p_itr += len;
	}
	return (array);
}

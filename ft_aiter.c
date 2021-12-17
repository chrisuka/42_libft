/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aiter.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 20:44:25 by ikarjala          #+#    #+#             */
/*   Updated: 2021/12/17 22:34:25 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_aiter(void ***array, size_t len,
			void (*fn)(void **), size_t bytesize)
{
	while (len-- > 0)
	{
		fn(*array);
		array += bytesize;
	}
}

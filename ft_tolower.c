/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:35:58 by ikarjala          #+#    #+#             */
/*   Updated: 2021/11/05 18:47:01 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	const int	ascii_case_offset = 'a' - 'A';

	if (c >= 'A' && c <= 'Z')
		return (c + ascii_case_offset);
	return (c);
}

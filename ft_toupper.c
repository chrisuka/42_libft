/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:46:24 by ikarjala          #+#    #+#             */
/*   Updated: 2021/11/06 21:18:03 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	const int	ascii_case_offset = 'a' - 'A';

	if (c >= 'a' && c <= 'z')
		return (c - ascii_case_offset);
	return (c);
}

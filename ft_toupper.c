/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:46:24 by ikarjala          #+#    #+#             */
/*   Updated: 2021/11/05 18:46:51 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	const int	ascii_case_offset = 'a' - 'A';

	if (c >= 'z' && c <= 'z')
		return (c - ascii_case_offset);
	return (c);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebogdan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 17:01:23 by ebogdan           #+#    #+#             */
/*   Updated: 2017/12/03 13:25:42 by ebogdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (c < 0 || c > 255)
		return (0);
	if (((unsigned char)c >= '0' && (unsigned char)c <= '9')
			|| ((unsigned char)c >= 'a' && (unsigned char)c <= 'z')
			|| ((unsigned char)c >= 'A' && (unsigned char)c <= 'Z'))
		return (1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebogdan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 14:37:24 by ebogdan           #+#    #+#             */
/*   Updated: 2017/12/02 14:50:49 by ebogdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char *s;
	char *dst_cpy;

	s = (char *)src;
	dst_cpy = dst;
	while (len > 0 && *s)
	{
		*dst = *s;
		dst++;
		s++;
		len--;
	}
	while (len > 0)
	{
		*dst = '\0';
		dst++;
		len--;
	}
	return (dst_cpy);
}

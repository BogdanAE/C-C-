/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebogdan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 15:21:29 by ebogdan           #+#    #+#             */
/*   Updated: 2017/12/02 16:31:11 by ebogdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	size_cpy;
	char	*s;

	s = (char *)src;
	len = ft_strlen(dst) + ft_strlen(s);
	if (size > ft_strlen(dst))
	{
		size_cpy = size - ft_strlen(dst) - 1;
		while (*dst)
		{
			dst++;
		}
		while (size_cpy && *s)
		{
			*dst++ = *s++;
			size_cpy--;
		}
		*dst = '\0';
	}
	else
		return (size + ft_strlen(s));
	return (len);
}

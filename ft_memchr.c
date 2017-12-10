/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebogdan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 12:30:58 by ebogdan           #+#    #+#             */
/*   Updated: 2017/11/28 15:06:24 by ebogdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *src;

	src = (unsigned char *)s;
	while (n > 0)
	{
		if (*src == (unsigned char)c)
		{
			return (src);
		}
		src++;
		n--;
	}
	return (NULL);
}

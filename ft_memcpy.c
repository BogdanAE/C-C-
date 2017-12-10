/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebogdan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 15:29:54 by ebogdan           #+#    #+#             */
/*   Updated: 2017/12/08 16:00:08 by ebogdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*srcc;
	size_t			i;

	dest = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dest[i] = srcc[i];
		i++;
	}
	return (dst);
}

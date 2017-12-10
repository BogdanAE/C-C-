/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebogdan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 12:45:39 by ebogdan           #+#    #+#             */
/*   Updated: 2017/12/06 18:35:49 by ebogdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *so1;
	unsigned char *so2;

	so1 = (unsigned char *)s1;
	so2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*so1 != *so2)
		{
			return (*so1 - *so2);
		}
		so1++;
		so2++;
		n--;
	}
	return (0);
}

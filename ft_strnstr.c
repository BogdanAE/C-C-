/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebogdan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 16:05:44 by ebogdan           #+#    #+#             */
/*   Updated: 2017/12/08 14:50:08 by ebogdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_cmp(char *b, char *s, size_t len)
{
	while (*b == *s && len)
	{
		b++;
		s++;
		len--;
		if (*s == '\0')
			return (1);
	}
	return (0);
}

char			*ft_strnstr(const char *big, const char *little, size_t len)
{
	char *f;

	if (*little == '\0' && ft_strlen((char *)little) == 0)
		return ((char *)big);
	while (len && *big)
	{
		if (*big == *little)
		{
			f = (char *)big;
			if (ft_cmp((char *)big, (char *)little, len))
				return (f);
			if (*(big + ft_strlen((char *)little)) == '\0')
				return (NULL);
		}
		big++;
		len--;
	}
	return (NULL);
}

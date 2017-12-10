/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebogdan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 16:35:53 by ebogdan           #+#    #+#             */
/*   Updated: 2017/12/08 15:20:05 by ebogdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *str;

	str = (char *)s;
	if ((char)c == '\0')
	{
		while (*str)
			str++;
		return (str);
	}
	while (*str)
	{
		if (*str == (char)c)
		{
			return (str);
		}
		str++;
	}
	return (NULL);
}

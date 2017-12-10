/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebogdan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 16:49:19 by ebogdan           #+#    #+#             */
/*   Updated: 2017/12/08 15:19:36 by ebogdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		len;

	str = (char *)s;
	len = ft_strlen(str) + 1;
	while (*str)
	{
		str++;
	}
	while (len)
	{
		if (*str == (char)c)
		{
			return (str);
		}
		str--;
		len--;
	}
	return (NULL);
}

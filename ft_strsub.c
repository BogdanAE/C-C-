/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebogdan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 15:34:59 by ebogdan           #+#    #+#             */
/*   Updated: 2017/12/08 20:07:13 by ebogdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		j;
	char		*s_cpy;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	s_cpy = (char *)malloc(sizeof(char) * (len + 1));
	if (s_cpy == NULL)
		return (NULL);
	while (s[i] && len > 0)
	{
		if (i >= start)
		{
			s_cpy[j] = s[i];
			j++;
			len--;
		}
		i++;
	}
	s_cpy[j] = '\0';
	return (s_cpy);
}

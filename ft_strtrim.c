/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebogdan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 16:49:53 by ebogdan           #+#    #+#             */
/*   Updated: 2017/12/08 20:23:09 by ebogdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_start(const char *s)
{
	int len;

	len = 0;
	while (*s == ' ' || *s == '\n' || *s == '\t')
	{
		len++;
		s++;
	}
	return (len);
}

static	int	ft_end(const char *s)
{
	int len;

	len = 0;
	while (*(s + 1))
		s++;
	while (*s == ' ' || *s == '\n' || *s == '\t')
	{
		len++;
		s--;
	}
	return (len);
}

char		*ft_strtrim(char const *s)
{
	char		*s_cpy;
	size_t		i;
	int			j;

	j = 0;
	if (s == NULL)
		return (NULL);
	i = ft_start(s);
	if (ft_strlen(s) - i == 0 || ft_strlen(s) - ft_end(s) == 0)
		s_cpy = (char *)malloc(sizeof(char) * 1);
	else
		s_cpy = (char *)malloc(sizeof(char) * (ft_strlen(s) -
					(i + ft_end(s)) + 1));
	if (s_cpy == NULL)
		return (NULL);
	if (ft_strlen(s) - ft_start(s) == 0)
		s_cpy[0] = '\0';
	else
	{
		while (i <= (ft_strlen(s) - ft_end(s) - 1))
			s_cpy[j++] = s[i++];
		s_cpy[j] = '\0';
	}
	return (s_cpy);
}

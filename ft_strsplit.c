/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebogdan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 18:03:44 by ebogdan           #+#    #+#             */
/*   Updated: 2017/12/08 20:45:36 by ebogdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	int		ft_char(char *s, char c)
{
	int		len;
	char	*s_cpy;

	s_cpy = s;
	len = 0;
	while (*s_cpy == c)
		s_cpy++;
	while (*s_cpy)
	{
		if (*s_cpy != c)
			len++;
		else
			return (len);
		s_cpy++;
	}
	return (len);
}

static	int		ft_words(char *s, char c)
{
	int		count;
	char	*s_cpy;

	s_cpy = s;
	count = 0;
	while (*s_cpy)
	{
		if (*s_cpy != c && (*(s_cpy + 1) == c || *(s_cpy + 1) == '\0'))
			count++;
		s_cpy++;
	}
	return (count);
}

static	void	ft_copy(char *s, char **s_cpy, int i, char c)
{
	int j;
	int chars;

	j = 0;
	s_cpy[i] = (char *)malloc(sizeof(char *) * (ft_char((char *)s, c) + 1));
	chars = ft_char(s, c);
	while (j < chars)
	{
		s_cpy[i][j] = *s;
		s++;
		j++;
	}
	s_cpy[i][j] = '\0';
}

char			**ft_strsplit(char const *s, char c)
{
	char	**s_cpy;
	char	*ss;
	int		i;
	int		words;

	if (s == NULL)
		return (NULL);
	ss = NULL;
	words = ft_words((char *)s, c);
	i = 0;
	ft_char((char *)s, c);
	s_cpy = (char **)malloc(sizeof(char *) * (ft_words((char *)s, c) + 1));
	if (s_cpy == NULL)
		return (NULL);
	while (i < words)
	{
		while (*s == c)
			s++;
		ss = (char *)s;
		ft_copy((char *)ss, s_cpy, i, c);
		i++;
		s += ft_char((char *)s, c);
	}
	s_cpy[words] = 0;
	return (s_cpy);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebogdan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 13:42:57 by ebogdan           #+#    #+#             */
/*   Updated: 2017/12/08 20:04:31 by ebogdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*s_cpy;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	s_cpy = (char *)malloc(ft_strlen(s) + 1);
	if (s_cpy == NULL)
		return (NULL);
	while (s[i])
	{
		s_cpy[i] = f(s[i]);
		i++;
	}
	s_cpy[i] = '\0';
	return (s_cpy);
}

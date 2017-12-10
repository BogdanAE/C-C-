/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebogdan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 14:43:11 by ebogdan           #+#    #+#             */
/*   Updated: 2017/12/08 20:04:46 by ebogdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*s_cpy;
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	s_cpy = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (s_cpy == NULL)
		return (NULL);
	while (s[i])
	{
		s_cpy[i] = f(i, s[i]);
		i++;
	}
	s_cpy[i] = '\0';
	return (s_cpy);
}

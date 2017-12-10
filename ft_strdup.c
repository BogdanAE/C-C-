/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebogdan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 13:20:01 by ebogdan           #+#    #+#             */
/*   Updated: 2017/12/06 18:36:37 by ebogdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char *source;
	char *s1_cpy;

	source = (char *)malloc(ft_strlen(s1) + 1);
	if (source == NULL)
		return (NULL);
	s1_cpy = source;
	while (*s1)
	{
		*source = *s1;
		source++;
		s1++;
	}
	*source = '\0';
	return (s1_cpy);
}

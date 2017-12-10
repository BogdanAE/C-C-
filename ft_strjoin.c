/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebogdan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 16:27:22 by ebogdan           #+#    #+#             */
/*   Updated: 2017/12/08 20:13:17 by ebogdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *ss;
	char *ss_cpy;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	ss = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (ss == NULL)
		return (NULL);
	ss_cpy = ss;
	while (*s1)
		*ss++ = *s1++;
	while (*s2)
	{
		*ss = *s2;
		ss++;
		s2++;
	}
	*ss = '\0';
	return (ss_cpy);
}

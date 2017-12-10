/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebogdan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 17:04:41 by ebogdan           #+#    #+#             */
/*   Updated: 2017/12/08 14:57:55 by ebogdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char *s;

	s = (char *)malloc(sizeof(char) * size + 1);
	if (s == NULL)
		return (NULL);
	ft_memset(s, '\0', size + 1);
	return (s);
}

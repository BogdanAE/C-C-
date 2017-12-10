/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebogdan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 16:07:37 by ebogdan           #+#    #+#             */
/*   Updated: 2017/12/01 12:41:14 by ebogdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void *s;

	s = (void *)malloc(size);
	if (s == NULL)
		return (NULL);
	s = ft_memset(s, 0, size);
	return (s);
}

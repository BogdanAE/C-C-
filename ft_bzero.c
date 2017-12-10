/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebogdan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 15:18:44 by ebogdan           #+#    #+#             */
/*   Updated: 2017/11/28 15:25:14 by ebogdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;
	unsigned char	tochange;

	tochange = 0;
	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = tochange;
		i++;
	}
}

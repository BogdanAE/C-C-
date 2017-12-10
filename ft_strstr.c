/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebogdan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 14:04:19 by ebogdan           #+#    #+#             */
/*   Updated: 2017/12/08 15:20:57 by ebogdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	char	*f;
	int		i;

	f = NULL;
	i = 0;
	if (*little == 0)
		return ((char *)big);
	while (*big)
	{
		if (*big == *little)
		{
			f = (char *)big;
			while (big[i] == little[i])
			{
				i++;
				if (little[i] == '\0')
					return (f);
			}
		}
		big++;
	}
	return (NULL);
}

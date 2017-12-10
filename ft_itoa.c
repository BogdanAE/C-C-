/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebogdan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 12:05:48 by ebogdan           #+#    #+#             */
/*   Updated: 2017/12/08 15:09:30 by ebogdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	int		ft_digits(int n)
{
	int len;

	len = 0;
	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
	if (n < 0)
		len = 1;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static	char	*ft_number(int n, char *ss, int i)
{
	int		j;
	char	*s;

	j = i;
	s = ss;
	while (n != 0)
	{
		if (n == -2147483648)
		{
			j--;
			s[j] = '8';
			n /= 10;
		}
		if (n < 0)
		{
			s[0] = '-';
			n *= -1;
		}
		s[j - 1] = (n % 10) + '0';
		n /= 10;
		j--;
	}
	return (s);
}

char			*ft_itoa(int n)
{
	char	*s;
	int		i;

	i = ft_digits(n);
	s = (char *)malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (NULL);
	s[i] = '\0';
	if (n == 0)
	{
		*s = '0';
		*(s + 1) = '\0';
		return (s);
	}
	ft_number(n, s, i);
	return (s);
}

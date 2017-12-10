/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebogdan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 15:01:24 by ebogdan           #+#    #+#             */
/*   Updated: 2017/12/08 16:20:54 by ebogdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_is_valid(char *str)
{
	if ((*str == '-' || *str == '+' || (*str >= '0' && *str <= '9')))
	{
		if (*str == '-')
			return (-1);
		else if (*str == '+')
			return (1);
		else if (*str >= '0' && *str <= '9')
			return (1);
	}
	return (0);
}

int			ft_atoi(const char *str)
{
	int i;
	int sign;

	i = 0;
	while (*str == ' ' || *str == '\n' || *str == '\r' || *str == '\t'
			|| *str == '\v' || *str == '\f')
		str++;
	sign = ft_is_valid((char *)str);
	if (sign == 0)
		return (0);
	if (*str == '+' || *str == '-')
		str++;
	while (*str && *str >= '0' && *str <= '9')
	{
		if (*str >= '0' && *str <= '9')
		{
			i = i * 10;
			i += *str - '0';
			str++;
		}
		else
			str++;
	}
	return (i * sign);
}

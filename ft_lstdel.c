/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebogdan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 14:43:18 by ebogdan           #+#    #+#             */
/*   Updated: 2017/12/08 15:16:30 by ebogdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *head;

	if (del == NULL)
		return ;
	if (alst == NULL)
		return ;
	while ((*alst))
	{
		head = (*alst)->next;
		ft_lstdelone(&(*alst), del);
		(*alst) = head;
	}
}

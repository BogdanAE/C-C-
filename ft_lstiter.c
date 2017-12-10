/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebogdan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 17:19:30 by ebogdan           #+#    #+#             */
/*   Updated: 2017/12/08 15:18:11 by ebogdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *temp;

	if (f == NULL)
		return ;
	if (lst == NULL)
		return ;
	while (lst)
	{
		temp = lst->next;
		f(lst);
		lst = temp;
	}
}

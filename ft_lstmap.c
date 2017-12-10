/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebogdan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 18:12:26 by ebogdan           #+#    #+#             */
/*   Updated: 2017/12/08 15:18:29 by ebogdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*lst_cpy;
	t_list	*result;

	if (lst == NULL || f == NULL)
		return (NULL);
	lst_cpy = f(lst);
	result = lst_cpy;
	while (lst->next)
	{
		lst = lst->next;
		if (!(lst_cpy->next = f(lst)))
		{
			lst_cpy->next = NULL;
			return (NULL);
		}
		lst_cpy = lst_cpy->next;
	}
	return (result);
}

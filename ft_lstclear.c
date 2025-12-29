/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 15:08:13 by aqoraan           #+#    #+#             */
/*   Updated: 2025/12/29 15:24:33 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *
 *Delete the whole list
 * */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;
	t_list	*save;

	if (!lst || !del || !*lst)
	{
		return ;
	}
	ptr = *lst;
	while (ptr->next_node != NULL)
	{
		save = (*lst)->next_node;
		ft_lstdelone(ptr, del);
		ptr = save;
	}
	ft_lstdelone(ptr, del);
}

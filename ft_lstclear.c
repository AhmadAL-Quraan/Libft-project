/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 15:08:13 by aqoraan           #+#    #+#             */
/*   Updated: 2025/12/30 04:16:28 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *
 *Delete the whole list
 if *lst not putted to null after finish it will result wiht danling pointer
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
	while (ptr != NULL)
	{
		save = ptr->next_node;
		ft_lstdelone(ptr, del);
		ptr = save;
	}
	*lst = NULL;
}

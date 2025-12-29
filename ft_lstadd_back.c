/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:14:29 by aqoraan           #+#    #+#             */
/*   Updated: 2025/12/29 14:22:48 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	ptr = *lst;
	while (ptr->next_node != NULL)
	{
		ptr = ptr->next_node;
	}
	ptr->next_node = new;
}

// int main() {
//   // node1 --> memory address to a ptr --> mem addrr of the first node
//   t_list *node1 = ft_lstnew("hey");
//   t_list *node2 = ft_lstnew("Helloo");
//   node1->next_node = node2;
//   t_list **ptr1 = &node1;
//   t_list *node3 = ft_lstnew("here");
//   ft_lstadd_back(ptr1, node3);
//
//   printf("%s", (char *)ft_lstlast(node1)->content);
// }

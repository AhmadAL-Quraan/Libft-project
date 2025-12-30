/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 16:18:48 by aqoraan           #+#    #+#             */
/*   Updated: 2025/12/30 03:12:30 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
 *
 * make the new node be the first node
 * So make it points to the original (old )node and make the **lst points to the
 * new one
 *
 * */
void ft_lstadd_front(t_list **lst, t_list *neww) {
  if (!lst || !neww) {
    return;
  }
  neww->next_node = *lst;
  *lst = neww;
}

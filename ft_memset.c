/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 03:25:52 by aqoraan           #+#    #+#             */
/*   Updated: 2025/12/30 03:32:33 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *Fill memory with a constant type within n bytes range
 *
 * */
#include "libft.h"
void *ft_memset(void *s, int c, size_t n) {
  if (!s) {
    return NULL;
  }

  unsigned char *ptr = (unsigned char *)s;
  size_t idx = 0;
  while (idx < n) {
    ptr[idx] = c;
    idx += 1;
  }
  return s;
}

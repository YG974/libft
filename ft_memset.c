/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygeslin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:27:12 by ygeslin           #+#    #+#             */
/*   Updated: 2019/10/08 15:06:33 by ygeslin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *ptr, int c, size_t n)
{
	char *tmp;

	tmp = (char *)ptr;
	while (n > 0)
	{
		tmp[n - 1] = c;
		n--;
	}
	return (ptr);
}

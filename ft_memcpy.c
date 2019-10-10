/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygeslin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:27:58 by ygeslin           #+#    #+#             */
/*   Updated: 2019/10/09 10:49:56 by ygeslin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *tmp_dst;
	char *tmp_src;

	tmp_dst = (char *)dst;
	tmp_src = (char *)src;
	while (n > 0)
	{
		tmp_dst[n - 1] = tmp_src[n - 1];
		n--;
	}
	return (dst);
}

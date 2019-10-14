/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygeslin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:29:15 by ygeslin           #+#    #+#             */
/*   Updated: 2019/10/14 14:27:31 by ygeslin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*tmp_dst;
	char	*tmp_src;
	size_t	i;

	i = 0;
	if (src < dst)
		return (ft_memcpy(dst, src, n));
	else
	{
		tmp_dst = (char *)dst;
		tmp_src = (char *)src;
		while (i < n)
		{
			tmp_dst[i] = tmp_src[i];
			i++;
		}
	}
	return (dst);
}

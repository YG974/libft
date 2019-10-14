/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygeslin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 10:50:38 by ygeslin           #+#    #+#             */
/*   Updated: 2019/10/14 14:13:43 by ygeslin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*tmp_dst;
	char	*tmp_src;
	size_t	i;

	tmp_dst = (char *)dst;
	tmp_src = (char *)src;
	i = 0;
	while (i < n)
	{
		tmp_dst[i] = tmp_src[i];
		if (tmp_src[i] == (char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}

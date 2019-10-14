/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygeslin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:02:49 by ygeslin           #+#    #+#             */
/*   Updated: 2019/10/14 10:44:20 by ygeslin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	total_size;

	dest_len = ft_strlen(dest);
	total_size = ft_strlen(src);
	src_len = 0;
	if (size <= dest_len)
		total_size = total_size + size;
	else
		total_size = total_size + dest_len;
	while (src[src_len] != '\0' && dest_len + 1 < size)
	{
		dest[dest_len] = src[src_len];
		dest_len++;
		src_len++;
	}
	dest[dest_len] = '\0';
	return (total_size);
}

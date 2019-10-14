/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygeslin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 11:08:21 by ygeslin           #+#    #+#             */
/*   Updated: 2019/10/14 10:43:36 by ygeslin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	i = 0;
	if (!(ptr = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i < len && s[start] != '\0')
	{
		ptr[i] = s[start];
		i++;
		start++;
	}
	ptr[len] = '\0';
	return (ptr);
}

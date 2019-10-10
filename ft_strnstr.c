/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygeslin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:00:08 by ygeslin           #+#    #+#             */
/*   Updated: 2019/10/09 19:09:34 by ygeslin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t i;
	size_t pos;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0' && i < n)
	{
		pos = 0;
		if (str[i] == to_find[pos])
			while (str[i + pos] == to_find[pos])
			{
				if (to_find[pos + 1] == '\0')
					return (&str[i]);
				pos++;
			}
		i++;
	}
	return (0);
}

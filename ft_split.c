/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygeslin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 13:50:15 by ygeslin           #+#    #+#             */
/*   Updated: 2019/10/14 13:48:02 by ygeslin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		str_is_charset(char const *str, char c)
{
	if (str[0] == c)
		return (1);
	return (0);
}

int		ft_tab_size(char const *str, char c)
{
	int i;
	int tab_size;

	i = 0;
	tab_size = 0;
	while (str[i])
	{
		if (!str_is_charset(&c, str[i]))
			tab_size++;
		while (!str_is_charset(&c, str[i]) && str[i])
			i++;
		while (str_is_charset(&c, str[i]) && str[i])
			i++;
	}
	return (tab_size);
}

char	*ft_strcpy(char *dest, char const *src, int pos, int str_len)
{
	int i;

	i = 0;
	while (pos + i < str_len)
	{
		dest[i] = src[pos + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_tab_strs(int tab_size)
{
	char **tab_strs;

	if (!(tab_strs = malloc(sizeof(char*) * (tab_size + 1))))
		return (NULL);
	tab_strs[tab_size] = NULL;
	return (tab_strs);
}

char	**ft_split(char const *str, char c)
{
	int		i;
	int		str_nb;
	int		str_len;
	char	**tab;

	i = 0;
	str_nb = 0;
	tab = ft_tab_strs(ft_tab_size(str, c));
	while (str[i])
	{
		str_len = 0;
		while (!str_is_charset(&c, str[i + str_len]) && str[i + str_len])
			str_len++;
		if (str_len)
		{
			if (!(tab[str_nb] = (char*)malloc(sizeof(char) * (str_len + 1))))
				return (NULL);
			tab[str_nb] = ft_strcpy(tab[str_nb], str, i, i + str_len);
			str_nb++;
		}
		while (str_is_charset(&c, str[i + str_len]))
			i++;
		i = i + str_len;
	}
	return (tab);
}

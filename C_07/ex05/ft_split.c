/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 12:29:09 by ctirions          #+#    #+#             */
/*   Updated: 2020/10/01 12:29:49 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_charset(char c, char *charset)
{
	int i;

	i = -1;
	while (charset[++i])
		if (c == charset[i])
			return (1);
	return (0);
}

int		ft_wordlen(char *str, char *charset)
{
	int size;

	size = 0;
	while (str[size] && !ft_is_charset(str[size], charset))
		size++;
	return (size);
}

int		ft_word_count(char *str, char *charset)
{
	int i;
	int j;

	j = 0;
	while (*str)
	{
		while (*str && ft_is_charset(*str, charset))
			str++;
		i = ft_wordlen(str, charset);
		str += i;
		if (i)
			j++;
	}
	return (j);
}

char	*ft_word_cpy(char *str, int size)
{
	char	*dest;

	if (!(dest = malloc(sizeof(dest) * (size + 1))))
		return (0);
	dest[size] = 0;
	while (size--)
		dest[size] = str[size];
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		i;
	int		j;
	int		size;

	size = ft_word_count(str, charset);
	if (!(res = malloc(sizeof(res) * (size + 1))))
		return (0);
	i = -1;
	while (++i < size)
	{
		while (*str && ft_is_charset(*str, charset))
			str++;
		j = ft_wordlen(str, charset);
		if (!(res[i] = ft_word_cpy(str, j)))
			return (0);
		str += j;
	}
	res[size] = 0;
	return (res);
}

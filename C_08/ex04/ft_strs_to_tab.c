/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 12:33:42 by ctirions          #+#    #+#             */
/*   Updated: 2020/09/30 13:26:53 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

char				*ft_strdup(char *str)
{
	int		size;
	char	*dest;
	int		size_two;

	size = 0;
	while (str[size])
		size++;
	size_two = size;
	if (!(dest = malloc(sizeof(char) * (size + 1))))
		return (0);
	while (size)
	{
		dest[size_two - size] = str[size_two - size];
		size--;
	}
	dest[size_two] = '\0';
	return (dest);
}

int					ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*res;

	if (ac < 0)
		ac = 0;
	i = -1;
	if (!(res = malloc(sizeof(t_stock_str) * (ac + 1))))
		return (0);
	while (++i < ac)
	{
		res[i].size = ft_strlen(av[i]);
		res[i].copy = ft_strdup(av[i]);
		res[i].str = av[i];
	}
	res[i].str = 0;
	return (res);
}

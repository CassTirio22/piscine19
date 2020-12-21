/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 09:21:22 by ctirions          #+#    #+#             */
/*   Updated: 2020/09/30 21:51:39 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int lenght, int (*f)(int))
{
	int *res;
	int i;

	if (!(res = malloc(sizeof(res) * lenght)))
		return (0);
	i = -1;
	while (++i < lenght)
		res[i] = f(tab[i]);
	return (res);
}

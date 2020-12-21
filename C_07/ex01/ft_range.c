/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 10:29:42 by ctirions          #+#    #+#             */
/*   Updated: 2020/09/26 15:32:39 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int size;

	if (min >= max)
		return (0);
	size = 0;
	while (min + size < max)
		size++;
	tab = malloc(sizeof(tab) * size);
	size = -1;
	while (++size + min < max)
		tab[size] = min + size;
	return (tab);
}

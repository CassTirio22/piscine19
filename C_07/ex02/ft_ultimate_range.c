/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 10:40:19 by ctirions          #+#    #+#             */
/*   Updated: 2020/09/29 09:23:00 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	max -= min;
	if (!(*range = malloc(sizeof(int) * max)))
		return (-1);
	i = -1;
	while (++i < max)
		(*range)[i] = min + i;
	return (max);
}

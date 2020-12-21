/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 10:22:58 by ctirions          #+#    #+#             */
/*   Updated: 2020/09/28 11:03:45 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		size;
	char	*dest;

	size = 0;
	while (src[size])
		size++;
	if (!(dest = malloc(sizeof(dest) * size + 1)))
		return (0);
	size = -1;
	while (src[++size])
		dest[size] = src[size];
	dest[size] = 0;
	return (dest);
}

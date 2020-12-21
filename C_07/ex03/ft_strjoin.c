/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 12:55:52 by ctirions          #+#    #+#             */
/*   Updated: 2020/10/01 12:28:32 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

char	*ft_strs_cpy(int size, char **strs, char *sep, char *dest)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < size)
	{
		ft_strcpy(dest + j, strs[i]);
		j += ft_strlen(strs[i]);
		if (++i < size)
		{
			ft_strcpy(dest + j, sep);
			j += ft_strlen(sep);
		}
	}
	dest[j] = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		j;

	j = 0;
	i = -1;
	while (++i < size)
		j += ft_strlen(strs[i]);
	if (size > 0)
		j += (size - 1) * ft_strlen(sep);
	if (!(dest = malloc((j + 1) * sizeof(strs))))
		return (0);
	ft_strs_cpy(size, strs, sep, dest);
	return (dest);
}

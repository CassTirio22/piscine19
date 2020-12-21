/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 17:51:21 by ctirions          #+#    #+#             */
/*   Updated: 2020/10/01 16:29:22 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_atoi_base(char *str, char *base);

int		check_base_error(char *base)
{
	int i;

	i = -1;
	while (base[++i])
		if (base[i] == '+' || base[i] == '-' || \
				(base[i] >= 9 && base[i] <= 13) || base[i] == ' ')
			return (1);
	return (0);
}

int		ft_strlen(char *str)
{
	int size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

int		ft_nbrlen(unsigned int nbr, unsigned int base_size)
{
	if (nbr < base_size)
		return (1);
	return (1 + ft_nbrlen(nbr / base_size, base_size));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	unsigned int	n;
	int				nb;
	int				size;
	int				power;
	char			*tab;

	if (check_base_error(base_from) || check_base_error(base_to))
		return (0);
	nb = ft_atoi_base(nbr, base_from);
	size = ft_strlen(base_to);
	n = (nb < 0) ? -nb : nb;
	power = ft_nbrlen(n, size);
	if (!(tab = malloc(sizeof(char) * (power + 1))))
		return (0);
	tab[power] = 0;
	while (power--)
	{
		tab[power] = base_to[n % size];
		n /= size;
	}
	if (nb < 0)
		tab[0] = '-';
	return (tab);
}

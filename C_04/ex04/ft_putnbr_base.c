/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 09:18:28 by ctirions          #+#    #+#             */
/*   Updated: 2020/09/24 09:42:27 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		check_error(char *base, int size)
{
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		j = i;
		while (++j < size)
			if (base[i] == base[j])
				return (1);
		i++;
	}
	i = -1;
	while (++i < size)
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == ' ' \
				|| (base[i] >= 9 && base[i] <= 13))
			return (1);
	}
	return (0);
}

void	ft_print(unsigned int nb, char *base, unsigned int size)
{
	int div;
	int res;

	res = 0;
	div = 1;
	while ((nb / div) >= size)
		div *= size;
	while (div > 0)
	{
		res = (nb / div) % size;
		ft_putchar(base[res]);
		div /= size;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int size;

	size = 0;
	while (base[size])
		size++;
	if (size < 2)
		return ;
	if (check_error(base, size))
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	ft_print(nbr, base, size);
}

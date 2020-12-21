/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 09:58:29 by ctirions          #+#    #+#             */
/*   Updated: 2020/10/01 09:25:39 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft.h"

int		check_error(int nbr2, char op)
{
	if (!nbr2)
	{
		if (op == '%')
		{
			ft_putstr("Stop : modulo by zero\n");
			return (1);
		}
		else if (op == '/')
		{
			ft_putstr("Stop : division by zero\n");
			return (1);
		}
	}
	return (0);
}

int		ft_find_op(char c)
{
	if (c == '+')
		return (0);
	else if (c == '-')
		return (1);
	else if (c == '%')
		return (2);
	else if (c == '/')
		return (3);
	else if (c == '*')
		return (4);
	return (-1);
}

int		main(int ac, char **av)
{
	int		(*f[5])(int, int);
	char	*op;
	int		x;
	int		y;

	op = "+-%/*";
	f[0] = &ft_plus;
	f[1] = &ft_minus;
	f[2] = &ft_modulo;
	f[3] = &ft_div;
	f[4] = &ft_multi;
	if (ac == 4)
	{
		x = ft_atoi(av[1]);
		y = ft_atoi(av[3]);
		if (check_error(y, av[2][0]))
			return (1);
		else if (ft_find_op(av[2][0]) == -1)
			ft_putnbr(0);
		else
			ft_putnbr((*f[ft_find_op(av[2][0])])(x, y));
		ft_putchar('\n');
	}
	return (0);
}

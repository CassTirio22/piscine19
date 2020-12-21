/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 10:56:03 by ctirions          #+#    #+#             */
/*   Updated: 2020/09/23 09:17:15 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_white_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || \
			c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	check_error(char *base, int size)
{
	int i;
	int j;

	i = -1;
	if (size < 2)
		return (1);
	while (++i < size)
	{
		j = i;
		while (++j < size)
			if (base[i] == base[j])
				return (1);
	}
	i = -1;
	while (base[++i])
		if (base[i] == '+' || base[i] == '-' || \
				ft_is_white_space(base[i]))
			return (1);
	return (0);
}

int	ft_base_translate(char *base, char c, int size)
{
	int i;

	i = -1;
	while (++i < size)
		if (base[i] == c)
			return (i);
	return (-1);
}

int	return_atoi_nbr(char *str, char *base, int size, int i)
{
	int nbr;

	nbr = 0;
	while (ft_base_translate(base, str[i], size) != -1)
		nbr = (size * nbr) + ft_base_translate(base, str[i++], size);
	return (nbr);
}

int	ft_atoi_base(char *str, char *base)
{
	int i;
	int neg;
	int size;

	neg = 0;
	i = 0;
	while (base[i])
		i++;
	size = i;
	if (check_error(base, i))
		return (0);
	i = 0;
	while (ft_is_white_space(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	if (neg % 2)
		return (-return_atoi_nbr(str, base, size, i));
	return (return_atoi_nbr(str, base, size, i));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 21:25:17 by ctirions          #+#    #+#             */
/*   Updated: 2020/09/22 18:18:58 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	space_or_not(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	long int	nb;
	int			neg;
	int			i;

	neg = 0;
	nb = 0;
	i = 0;
	while (space_or_not(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			neg++;
	while (str[i] >= '0' && str[i] <= '9')
		nb = 10 * nb + (str[i++] - '0');
	if (neg % 2)
		return (-nb);
	return (nb);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 09:50:56 by ctirions          #+#    #+#             */
/*   Updated: 2020/09/24 17:50:25 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	unsigned int i;
	unsigned int nbr;

	if (nb < 3)
		return (2);
	i = 2;
	nbr = nb;
	while (i * i <= nbr)
	{
		if (!(nb % i))
		{
			i = 1;
			nb++;
		}
		i++;
	}
	return (nb);
}

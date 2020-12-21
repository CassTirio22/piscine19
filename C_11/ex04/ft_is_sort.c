/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 09:50:48 by ctirions          #+#    #+#             */
/*   Updated: 2020/10/01 09:17:33 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int diff;
	int diff2;

	i = 0;
	while (i < length && (!(diff = f(tab[i], tab[i + 1]))))
		i++;
	while (i < length)
	{
		diff2 = f(tab[i], tab[i + 1]);
		if ((diff < 0 && diff2 > 0) || (diff > 0 && diff2 < 0))
			return (0);
		i++;
	}
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 09:44:28 by ctirions          #+#    #+#             */
/*   Updated: 2020/10/01 09:16:50 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int count;
	int i;

	i = -1;
	count = 0;
	while (++i < length)
		if (f(tab[i]))
			count++;
	return (count);
}

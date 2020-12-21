/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 19:39:29 by ctirions          #+#    #+#             */
/*   Updated: 2020/10/01 09:25:06 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strs_swap(char **a, char **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int i;
	int j;
	int size;

	size = 0;
	while (tab[size])
		size++;
	i = -1;
	while (++i < size - 1)
	{
		j = -1;
		while (++j < size - i - 1)
			if (cmp(tab[j], tab[j + 1] > 0))
				ft_strs_swap(&tab[j], &tab[j + 1]);
	}
}

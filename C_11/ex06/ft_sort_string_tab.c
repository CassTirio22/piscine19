/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 17:12:07 by ctirions          #+#    #+#             */
/*   Updated: 2020/09/30 22:23:06 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_strs_swap(char **a, char **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_string_tab(char **tab)
{
	int i;
	int j;
	int size;

	size = 0;
	while (tab[size])
		size++;
	i = -1;
	while (i++ < size - 1)
	{
		j = -1;
		while (++j < size - 1 - i)
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
				ft_strs_swap(&tab[j], &tab[j + 1]);
	}
}

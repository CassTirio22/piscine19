/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 18:39:31 by ctirions          #+#    #+#             */
/*   Updated: 2020/09/16 17:15:10 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	if (!to_find[0])
		return (str);
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[0])
		{
			while (to_find[j] && str[i] == to_find[j])
			{
				i++;
				j++;
			}
			if (!to_find[j])
				return (&str[i -= j]);
			else
				i -= j;
		}
		i++;
	}
	return (0);
}

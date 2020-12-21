/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 11:43:51 by ctirions          #+#    #+#             */
/*   Updated: 2020/09/14 10:12:44 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int i;
	int output;

	if (*(str + 0) == '\0')
		return (1);
	i = 0;
	while (*(str + i))
	{
		if ((*(str + i) >= 97) && (*(str + i) <= 122))
			output = 1;
		else
			return (0);
		i++;
	}
	return (output);
}

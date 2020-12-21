/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 09:25:59 by ctirions          #+#    #+#             */
/*   Updated: 2020/09/15 09:26:05 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int i;
	int output;

	if (*(str + 0) == '\0')
		return (1);
	i = 0;
	while (*(str + i))
	{
		if ((*(str + i) >= 65) && (*(str + i) <= 90))
			output = 1;
		else
			return (0);
		i++;
	}
	return (output);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 20:58:39 by ctirions          #+#    #+#             */
/*   Updated: 2020/09/14 10:10:26 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int i;
	int output;

	if (str[0] == '\0')
		return (1);
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 48) && (str[i] <= 57))
			output = 1;
		else
			return (0);
		i++;
	}
	return (output);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 19:40:51 by ctirions          #+#    #+#             */
/*   Updated: 2020/09/15 12:35:22 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int i;
	int output;

	if (str[0] == '\0')
		return (1);
	i = 0;
	while (str[i])
	{
		if (((str[i] >= 65) && (str[i] <= 90))
				|| ((str[i] >= 97) && (str[i] <= 122)))
			output = 1;
		else
			return (0);
		i++;
	}
	return (output);
}

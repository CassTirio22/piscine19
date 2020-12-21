/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 14:00:48 by ctirions          #+#    #+#             */
/*   Updated: 2020/09/14 10:47:35 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int i;
	int output;

	if (*(str + 0) == '\0')
		return (1);
	i = 0;
	while (*(str + i))
	{
		if (((*(str + i) >= 0) && (*(str + i)) <= 31) || (*(str + i) == 127))
			return (0);
		else
			output = 1;
		i++;
	}
	return (output);
}

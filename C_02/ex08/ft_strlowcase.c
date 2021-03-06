/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 14:24:28 by ctirions          #+#    #+#             */
/*   Updated: 2020/09/14 11:07:10 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (*(str + i))
	{
		if ((*(str + i) >= 65) && (*(str + i) <= 90))
			*(str + i) = *(str + i) + 32;
		i++;
	}
	return (str);
}

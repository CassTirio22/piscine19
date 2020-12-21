/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 14:30:56 by ctirions          #+#    #+#             */
/*   Updated: 2020/09/15 17:59:23 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	changes_conditions(int first, int i, char *str)
{
	if (first && (str[i] >= 'a' && str[i] <= 'z'))
		str[i] -= 32;
	else if (!(first) && (str[i] >= 'A' && str[i] <= 'Z'))
		str[i] += 32;
}

int		if_alphanumeric(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || \
			(c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int first;

	i = 0;
	while (str[i])
	{
		first = 1;
		while (if_alphanumeric(str[i]))
		{
			changes_conditions(first, i, str);
			i++;
			first = 0;
		}
		if (first)
			i++;
	}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 18:28:44 by ctirions          #+#    #+#             */
/*   Updated: 2020/09/21 09:09:40 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;

	i = 0;
	while (dest[i])
		i++;
	while (*src && nb--)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest);
}

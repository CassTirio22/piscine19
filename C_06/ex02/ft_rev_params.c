/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 11:22:33 by ctirions          #+#    #+#             */
/*   Updated: 2020/09/24 09:53:16 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int size;

	size = argc;
	i = 1;
	while (argc-- > 1)
	{
		while (*argv[size - i])
			write(1, argv[size - i]++, 1);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

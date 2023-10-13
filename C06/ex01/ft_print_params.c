/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 13:38:00 by caiperei          #+#    #+#             */
/*   Updated: 2023/08/14 13:51:03 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	x;

	x = 1;
	while (x < argc)
	{
		i = 0;
		while (argv[x][i] != '\0')
		{
			write(1, &argv[x][i], 1);
			i++;
		}
		write(1, "\n", 1);
		x++;
	}
	return (0);
}

// argc - quantidade de argumentos
// argv - guarda os argumentos

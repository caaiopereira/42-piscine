/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 13:55:00 by caiperei          #+#    #+#             */
/*   Updated: 2023/07/30 15:03:01 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	line;
	int	column;

	line = 1;
	while (line <= y)
	{
		column = 1;
		while (column <= x)
		{
			if ((line == 1 && column == 1) || (line == y && column == 1))
				ft_putchar('A');
			else if ((line == 1 && column == x) || (line == y && column == x))
				ft_putchar('C');
			else if (line == 1 || line == y || column == 1 || column == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			column++;
		}
		line++;
		ft_putchar('\n');
	}
}

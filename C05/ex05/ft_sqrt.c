/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 06:56:07 by caiperei          #+#    #+#             */
/*   Updated: 2023/08/17 07:03:14 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	var;

	var = 1;
	if (nb < 0)
		return (0);
	while (nb >= var * var && var < 46341)
	{
		if (var * var == nb)
			return (var);
		var++;
	}
	return (0);
}

/*int	main(void)
{
	printf("%d", ft_sqrt(144));
}*/

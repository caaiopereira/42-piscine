/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:22:44 by caiperei          #+#    #+#             */
/*   Updated: 2023/08/17 14:52:49 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int	num = 0;

	int	*nbr1 = &num;
	int	**nbr2 = &nbr1;
	int	***nbr3 = &nbr2;
	int	****nbr4 = &nbr3;
	int	*****nbr5 = &nbr4;
	int	******nbr6 = &nbr5;
	int	*******nbr7 = &nbr6;
	int	********nbr8 = &nbr7;
	int	*********nbr9 = &nbr8;

	ft_ultimate_ft(nbr9);
	printf("%d", num);
}

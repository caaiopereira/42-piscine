/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 16:02:56 by caiperei          #+#    #+#             */
/*   Updated: 2023/08/06 16:17:41 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
//str - palavra/frase, [i] - quantidade de caractere,
// != - diferente de, '\0' - nulo/fim da string
// return (i) - retorna o tamanho da string

int	main()
{
	char *c = "abc";
	printf("%d", ft_strlen(c));
}
//char *c - variavel de ponteiro com o valor abc
//%d - valor inteiro, printf - imprimir
//ft_strlen(c) - chamada de função com a variavel c

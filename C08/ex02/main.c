/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:28:39 by caiperei          #+#    #+#             */
/*   Updated: 2023/10/13 10:28:42 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_abs.h"

int main() {
    int number = -42; // Número negativo

    printf("Número original: %d\n", number);
    printf("Valor absoluto: %d\n", ABS(number));

    return 0;
}

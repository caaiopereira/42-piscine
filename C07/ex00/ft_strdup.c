/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:17:05 by caiperei          #+#    #+#             */
/*   Updated: 2023/10/13 11:11:26 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*p;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	len = i;
	p = malloc((len + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

int	main(void)
{
	char	src[] = "FLUMINENSE";

	printf("%s", ft_strdup(src));
}

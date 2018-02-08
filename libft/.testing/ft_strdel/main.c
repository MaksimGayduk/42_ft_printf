/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayduk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 12:15:20 by mgayduk           #+#    #+#             */
/*   Updated: 2017/11/01 12:36:57 by mgayduk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

#include "/nfs/2017/m/mgayduk/02_libft/libft.h"

int	main(void)
{
	char *c;
	int i;
	int len;

	len = 5;
	c = (char *)malloc(sizeof(char) * len);
	i = 0;
	while (i < len)
	{
		c[i] = i + 97;
		i++;
	}
	printf("str = %s\n", c);
    ft_strdel(&c);
    if (!c)
        printf("Memory was fried\n");

	return (0);
}

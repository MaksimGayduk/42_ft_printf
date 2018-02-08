/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayduk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 11:22:19 by mgayduk           #+#    #+#             */
/*   Updated: 2017/11/01 16:00:02 by mgayduk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "/nfs/2017/m/mgayduk/02_libft/libft.h"

char	invert_case(unsigned int i, char c);

int		main(void)
{
	char str[] = "hello, UNIT!";
	char *dest;

	printf("Original string:\t%s\n", str);
	dest = ft_strmapi(str, &invert_case);
	printf("Fresh string:\t\t%s\n", dest);
	return (0);
}

char	invert_case(unsigned int i, char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32 + i;
	else if (c >= 'a' && c <= 'z')
		c -= 32 + i;
	return (c);
}

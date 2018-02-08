/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayduk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 11:22:19 by mgayduk           #+#    #+#             */
/*   Updated: 2017/11/15 11:21:38 by mgayduk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "/nfs/2017/m/mgayduk/02_libft/libft.h"

int	main(void)
{
	char *str = "      3";
	char *dest;

	printf("Original string: %s\n", str);
	dest = ft_strtrim(str);
	printf("Trimmed string:|%s|\n", dest);
	if (dest == str)
		printf("Its a copy\n");
	else
		printf("Its a NEW string\n");

	return (0);
}

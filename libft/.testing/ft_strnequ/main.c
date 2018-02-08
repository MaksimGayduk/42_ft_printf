/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayduk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 11:22:19 by mgayduk           #+#    #+#             */
/*   Updated: 2017/11/09 13:39:18 by mgayduk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "/nfs/2017/m/mgayduk/02_libft/libft.h"

int	main(void)
{
	unsigned int	n = 1;
	char			*str1 = "strong";
	char			*str2 = "str";

	if (ft_strnequ(str1, str2, n) == 1)
		printf("Strings are equal\n");
	else if (ft_strnequ(str1, str2, n) == 0)
		printf("Strings are NOT equal\n");
	return (0);
}

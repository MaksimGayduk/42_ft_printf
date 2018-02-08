/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayduk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 11:22:19 by mgayduk           #+#    #+#             */
/*   Updated: 2017/11/06 18:41:30 by mgayduk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#include "/nfs/2017/m/mgayduk/02_libft/libft.h"

#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define BLU   "\x1B[34m"
#define MAG   "\x1B[35m"
#define CYN   "\x1B[36m"
#define WHT   "\x1B[37m"
#define RESET "\x1B[0m"

#define S 'b'
#define N 5

int	main(void)
{
	
	char dest[] = "1234567890";
	//char *dest = NULL;
	char *src = "aaabcc";
	
	memccpy(dest, src, S, N);
	printf("%s\n", dest);
	printf("%s\n", (char *)memccpy(dest, src, S, N));
	
	
	char dest2[] = "1234567890";
	//char *dest2 = NULL;
    char *src2 = "aaabcc";
	ft_memccpy(dest2, src2, S, N);
    printf("%s\n", dest2);
    printf("%s\n", (char *)ft_memccpy(dest2, src2, S, N));
	
	return (0);
}

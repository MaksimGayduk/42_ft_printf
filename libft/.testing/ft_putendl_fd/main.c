/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayduk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 11:22:19 by mgayduk           #+#    #+#             */
/*   Updated: 2017/11/04 14:17:57 by mgayduk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "/nfs/2017/m/mgayduk/02_libft/libft.h"

int	main(void)
{
	char *str = "Hello, Unit!";
	char *empty = "";
	char *none = NULL;
	int fd = 1;

	ft_putendl_fd(str, fd);

	ft_putendl_fd(empty, fd);

	ft_putendl_fd(none, fd);
	return (0);
}

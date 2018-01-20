/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayduk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 14:51:42 by mgayduk           #+#    #+#             */
/*   Updated: 2018/01/18 15:14:58 by mgayduk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_printf(const char * format, ...)
{
	va_list ap;
	int		count;

	count = 0;
	va_start(ap, format);
	va_end(ap);
	return (count);
}

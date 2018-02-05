/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayduk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 17:19:27 by mgayduk           #+#    #+#             */
/*   Updated: 2018/01/26 14:07:43 by mgayduk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	check_width(char **q_str, t_fq *fq, va_list ap)
{
	int t;

	if (**q_str == '.')
		return (0);
	if (**q_str == '*')
	{
		t = va_arg(ap, int);
		fq->width = FT_ABS(t);
		(*q_str)++;
		return (1);
	}
	if (ft_isdigit(**q_str) && **q_str != '0')
	{
		fq->width = ft_atoi(*q_str);
		(*q_str) += ft_numlen(fq->width);
		return (1);
	}
	return (0);
}

int	 check_precision(char **q_str, t_fq *fq, va_list ap)
{
	char	*dot;

	dot = *q_str;
	if (*dot == '.')
	{
		if (*(dot + 1) == '*')
		{
			fq->precision = va_arg(ap, int);
			(*q_str)++;
			return (1);
		}
		fq->precision = ft_atoi(dot + 1);
		if (ft_isdigit(*(*q_str + 1)))
			(*q_str) += ft_numlen(fq->precision) + 1;
		else
			(*q_str) += 1;
		return (1);
	}
	return (0);
}

int	check_size(char **q_str, t_fq *fq)
{
	if (**q_str == 'h' && *(*q_str + 1) == 'h')
	{
		fq->size = hh;
		(*q_str) += 2;
		return (1);
	}
	else if (**q_str == 'h')
	{
		fq->size = h;
		(*q_str) += 1;
		return (1);
	}
	else if (**q_str == 'l' && *(*q_str + 1) == 'l')
	{
		fq->size = ll;
		(*q_str) += 2;
		return (1);
	}
	else if (**q_str == 'l')
	{
		fq->size = l;
		(*q_str) += 1;
		return (1);
	}
	else if (**q_str == 'j')
	{
		fq->size = j;
		(*q_str) += 1;
		return (1);
	}
	else if (**q_str == 'z')
	{
		fq->size = z;
		(*q_str) += 1;
		return (1);
	}
	return 0;
}

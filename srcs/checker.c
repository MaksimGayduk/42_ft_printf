/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayduk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 17:19:27 by mgayduk           #+#    #+#             */
/*   Updated: 2018/01/24 12:08:06 by mgayduk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	check_width(char *q_str, t_fq *fq, va_list ap)
{
	int i;

	i = 1;
	while (q_str[i])
	{
		if (q_str[i] == '.')
			return ;
		if (q_str[i] == '*')
		{
			fq->width = va_arg(ap, int);
			return ;
		}
		if (ft_isdigit(q_str[i]))
		{
			fq->width = ft_atoi(&(q_str[i]));
			return ;
		}
		i++;
	}
}

void	check_precision(char *q_str, t_fq *fq, va_list ap)
{
	char	*dot;

	if ((dot = ft_strchr(q_str, '.')))
	{
		if (*(dot + 1) == '*')
		{
			fq->precision = va_arg(ap, int);
			return ;
		}
		fq->precision = ft_atoi(dot + 1);
	}
}

void	check_size(char *q_str, t_fq *fq)
{
	if (ft_strstr(q_str, "hh"))
		fq->size = hh;
	else if (ft_strstr(q_str, "h"))
		fq->size = h;
	else if (ft_strstr(q_str, "ll"))
		fq->size = ll;
	else if (ft_strstr(q_str, "l"))
		fq->size = l;
	else if (ft_strstr(q_str, "j"))
		fq->size = j;
	else if (ft_strstr(q_str, "z"))
		fq->size = z;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form_i_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayduk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 14:29:24 by mgayduk           #+#    #+#             */
/*   Updated: 2018/01/27 09:59:03 by mgayduk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	form_i_d(t_fq *fq, va_list ap)
{
	long long	n;
	char	*s;
	size_t	len;

	n = va_arg(ap, int);
	s = ft_itoa(FT_ABS(n));

	len = ft_strlen(s);
	if (fq->precision > (int)len)
		s = fill_right(s, fq->precision, len, '0');
	len = ft_strlen(s);
	if (n < 0)
		s = fill_right(s, len + 1, len, '-');
	if (fq->flags[PLUS] == '1' && n >= 0)
		s = fill_right(s, len + 1, len, '+');
	len = ft_strlen(s);
	if (fq->width > len)
	{
        if (fq->flags[MINUS] == '1')
            s = fill_left(s, fq->width, len, ' ');
        else
            s = fill_right(s, fq->width, len,
						   fq->flags[ZERO] == '1' ? '0' : ' ');
	}
	fq->str_out = s;
	fq->str_len = ft_strlen(fq->str_out);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form_c_wide.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayduk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/06 11:17:36 by mgayduk           #+#    #+#             */
/*   Updated: 2018/02/06 11:17:39 by mgayduk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static short count_active_bits(intmax_t n)
{
    short k;

    while (n >> k)
        k++;
    return (k);
}

static char  *utf8_2bytes(int val)
{
    char *arr;

    arr = ft_strnew(2);
    arr[0] = 0b11000000 | (val >> 6);
    arr[1] = (0b10000000 | val) & 0b10111111;
    return (arr);
}

static char  *utf8_3bytes(int val)
{
    char *arr;

    arr = ft_strnew(3);
    arr[0] = 0b11100000 | (val >> 12);
    arr[1] = (0b10000000 | (val >> 6)) & 0b10111111;
    arr[2] = (0b10000000 | val) & 0b10111111;
    return (arr);
}

void    form_c_wide(t_fq *fq, va_list ap)
{
    short nb;
    int val;

    val = va_arg(ap, int);
    nb = count_active_bits(val);
    if (nb <= 7)
    {
        fq->s = ft_strnew(1);
        fq->s[0] = val;
    }
    else if (nb <= 11)
        fq->s = utf8_2bytes(val);
    else if (nb <= 16)
        fq->s = utf8_3bytes(val);
    fq->l = ft_strlen(fq->s);
}
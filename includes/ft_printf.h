/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayduk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 14:52:28 by mgayduk           #+#    #+#             */
/*   Updated: 2018/01/24 11:24:30 by mgayduk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>

# include <stdarg.h>
# include <stdlib.h>
# include "../libft/libft.h"

# define MINUS 0
# define PLUS  1
# define SPACE 2
# define HASH  3
# define ZERO  4

typedef enum	e_size_modificator
{
	hh = 1,
	h  = 2,
	ll = 3,
	l  = 4,
	j  = 5,
	z  = 6
}				t_sm;

typedef struct	s_format_qualifier
{
	char		flags[6];
	int			width;
	int			precision;
	t_sm		size;
	char		type;
	int			indent;
	char		*str_out;
}				t_fq;

int				ft_printf(const char *format, ...);

int				parse_qualifier(const char *qual, t_fq *fq, va_list ap);
void			check_width(char *q_str, t_fq *fq, va_list ap);
void			check_precision(char *q_str, t_fq *fq, va_list ap);
void			check_size(char *q_str, t_fq *fq);

int				form_output(va_list ap, t_fq *fq);

#endif

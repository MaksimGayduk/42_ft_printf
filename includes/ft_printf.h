/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayduk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 14:52:28 by mgayduk           #+#    #+#             */
/*   Updated: 2018/01/27 17:26:07 by mgayduk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>

# include <stdarg.h>
# include <wchar.h>
# include <locale.h>
# include <stdlib.h>
# include <limits.h>
# include "../libft/libft.h"

# define MINUS 0
# define PLUS  1
# define SPACE 2
# define HASH  3
# define ZERO  4

typedef enum	e_size_modificator
{
	i = 0,
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
	size_t		width;
	int			precision;
	t_sm		size;
	char		type;
	int			indent;
	char		*s;
	size_t		l;
	intmax_t	n;
	uintmax_t	un;
}				t_fq;

int				ft_printf(const char *format, ...);

void			parse_qualifier(const char *qual, t_fq *fq, va_list ap);
int				check_width(char **q_str, t_fq *fq, va_list ap);
int				check_precision(char **q_str, t_fq *fq, va_list ap);
int				check_size(char **q_str, t_fq *fq);

int				form_output(va_list ap, t_fq *fq);
char			*fill_left(char *s, size_t width, size_t *len, char c);
char			*fill_right(char *s, size_t width, size_t *len, char c);
void			form_s(t_fq *fq, va_list ap);
void			form_c(t_fq *fq, va_list ap);
void			form_c_wide(t_fq *fq, va_list ap);
void			form_i_d(t_fq *fq, va_list ap);
void			form_x_o_u(t_fq *fq, va_list ap);
void 			form_p(t_fq *fq, va_list ap);

void			form_issue_out(t_fq *fq, char c);

void			add_sign(t_fq *fq);
void			compute_precision(t_fq *fq);
void			compute_precision_unsigned(t_fq *fq);
void			compute_width(t_fq *fq);
void			compute_width_unsigned(t_fq *fq);
void			add_prefix(t_fq *fq);

#endif

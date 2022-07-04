/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 10:59:12 by fesper-s          #+#    #+#             */
/*   Updated: 2022/07/01 14:30:28 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "../libft/libft.h"

int	ft_printf(const char *format, ...);
int	ft_printf_selection(va_list ap, const char *format, int i);
int	ft_printf_c(int c);
int	ft_printf_s(char *s);
int	ft_printf_d(int d);
int	ft_printf_i(int i);
int	ft_printf_ud(unsigned int ud);
int	ft_printf_x(unsigned int x);
int	ft_printf_xu(unsigned int xu);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_con.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 12:37:12 by fesper-s          #+#    #+#             */
/*   Updated: 2022/06/28 12:47:10 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printf_con(va_list ap, const char *format)
{
	int	len;

	len = 0;
	if (*format == 'c')
		len += ft_printf_c(va_arg(ap, char));
	else if (*format == 's')
		len += ft_printf_s(va_arg(ap, char *));
	else if (*format == 'p')
	return (len);
}

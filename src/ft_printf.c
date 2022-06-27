/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 10:52:00 by fesper-s          #+#    #+#             */
/*   Updated: 2022/06/27 15:25:06 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int	i;
	int	len;

	va_start(ap, format);
	while (i < ft_strlen(format))
	{
		len += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 12:54:01 by fesper-s          #+#    #+#             */
/*   Updated: 2022/07/01 08:16:53 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_d(int d)
{
	char	*str;

	str = ft_itoa(d);
	ft_putstr_fd(str, 1);
	free(str);
	return (ft_strlen(str));
}

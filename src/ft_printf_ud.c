/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ud.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 12:58:31 by fesper-s          #+#    #+#             */
/*   Updated: 2022/06/28 13:00:07 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_ud(unsigned int ud)
{
	char	*str;

	str = ft_itoa(ud);
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

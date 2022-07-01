/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ud.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 12:58:31 by fesper-s          #+#    #+#             */
/*   Updated: 2022/07/01 08:23:42 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_count(int i, long nbr)
{
	if (nbr == 0)
		i++;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

static char	*ft_putstr(int i, long nbr, char *str)
{
	str[i] = 0;
	if (nbr == 0)
		str[--i] = nbr + 48;
	while (nbr > 0)
	{
		str[--i] = (nbr % 10) + 48;
		nbr = nbr / 10;
	}
	return (&*str);
}

static char	*ft_uitoa(unsigned int n)
{
	int		i;
	char	*str;
	long	nbr;

	i = 0;
	i = ft_count(i, n);
	nbr = (long) n;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		str = malloc((++i + 1) * sizeof(char));
		if (str == 0)
			return (0);
		str[0] = '-';
	}
	else
	{
		str = malloc((i + 1) * sizeof(char));
		if (str == 0)
			return (0);
	}
	str = ft_putstr(i, nbr, str);
	return (str);
}

int	ft_printf_ud(unsigned int ud)
{
	char	*str;

	str = ft_uitoa(ud);
	ft_putstr_fd(str, 1);
	free(str);
	return (ft_strlen(str));
}

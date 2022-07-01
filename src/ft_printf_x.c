/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 09:47:47 by fesper-s          #+#    #+#             */
/*   Updated: 2022/07/01 14:52:32 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_count(int len, unsigned int nbr)
{
	if (!nbr)
		len++;
	while (nbr)
	{
		nbr /= 16;
		len++;
	}
	return (len);
}

static char	*ft_putstr(int i, unsigned int nbr, char *str)
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
	int				i;
	char			*str;
	unsigned long	nbr;

	i = 0;
	i = ft_count(i, n);
	nbr = (unsigned long) n;
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

int	ft_printf_x(unsigned int x)
{
	char	*str;

	str = ft_uitoa(x);
	ft_putstr_fd(str, 1);
	free(str);
	return (ft_strlen(str));
}

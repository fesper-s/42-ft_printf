/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 11:04:19 by fesper-s          #+#    #+#             */
/*   Updated: 2022/07/04 13:11:28 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	nbr;
	int	len;
	int	len2;

	nbr = 127;
	len = ft_printf("%X\n", nbr);
	len2 = printf("%X\n", nbr);
	printf("len = %d\nlen2 = %d\n", len, len2);
	return (0);
}

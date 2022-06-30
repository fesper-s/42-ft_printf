/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 11:04:19 by fesper-s          #+#    #+#             */
/*   Updated: 2022/06/30 14:27:10 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int				len;
	unsigned int	teste;
	
	teste = 666;
	len = ft_printf("Eu %% amo %i chocolate\n", teste);
	printf("%d\n", len);
	return (0);
}

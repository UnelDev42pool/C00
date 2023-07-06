/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:40:59 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/05 16:19:14 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int unit, int dec, int cent)
{
	const int	comma = ',';
	const int	space = ' ';

	unit = unit + 48;
	dec = dec + 48;
	cent = cent + 48;
	write(0, &cent, 1);
	write(0, &dec, 1);
	write(0, &unit, 1);
	if (cent == 55 && dec == 56 && unit == 57)
	{
		return ;
	}
	write(0, &comma, 1);
	write(0, &space, 1);
}

void	ft_print_comb(void)
{
	int	unit;
	int	dec;
	int	cent;

	cent = 0;
	while (cent <= 7)
	{
		dec = cent;
		while (dec <= 8)
		{
			unit = dec;
			while (unit <= 9)
			{
				if (cent != dec && cent != unit && dec != unit)
				{
					print(unit, dec, cent);
				}
				unit++;
			}
			dec++;
		}
		cent++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:55:39 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/07 11:47:17 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int nb)
{
	int	n;

	if (nb >= 0 && nb < 10)
	{
		ft_putchar('0' + nb);
	}
	if (nb >= 10 && nb < 100)
	{
		ft_putchar('0' + (nb / 10));
		ft_putchar('0' + (nb % 10));
	}
	if (nb > 100)
	{
		print((nb / 10));
		print(nb % 10);
	}
	if (nb < 0)
	{
		n = -(nb * 2);
		print('-');
		nb = nb + n;
		print(nb);
	}
}

void	comma(void)
{
	const int	comma = ',';

	write(0, &comma, 1);
}

void	ft_print_comb2(void)
{
	int			i;
	int			j;
	const int	space = ' ';
	const int	comma = ',';

	i = 0;
	while (i < 99)
	{
		j = i;
		while (j < 100)
		{
			if (i != j)
			{
				print(i);
				write(1, &space, 1);
				print(j);
				if(!((i == 98) && (j == 99)))
				{
					write(1, &comma, 1);
				}
			}
			j++;
		}
		i++;
	}
}

int main()
{
	ft_print_comb2();
}
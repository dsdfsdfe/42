/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 00:11:08 by haoh              #+#    #+#             */
/*   Updated: 2020/10/23 00:12:04 by haoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_2(int a, int b)
{
	ft_putchar(a / 10 + '0');
	ft_putchar(a % 10 + '0');
	ft_putchar(' ');
	ft_putchar(b / 10 + '0');
	ft_putchar(b % 10 + '0');
	if (a != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int b;

	a = 00;
	b = 00;
	while (a < 100)
	{
		b = a + 1;
		while (b < 100)
		{
			ft_print_2(a, b);
			b++;
		}
		a++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haoh <haoh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 23:43:26 by haoh              #+#    #+#             */
/*   Updated: 2020/10/22 23:52:54 by haoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0' - 1;
	while (++a <= '9')
	{
		b = a;
		while (++b <= '9')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				if (a != '7' || b != '8' || c != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				++c;
			}
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 15:22:55 by marvin            #+#    #+#             */
/*   Updated: 2020/10/22 15:22:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		ft_putchar('8');
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else
	{
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
		}
		ft_putchar(48 + nb % 10);
	}
}

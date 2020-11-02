/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haoh <haoh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 14:14:02 by haoh              #+#    #+#             */
/*   Updated: 2020/11/02 22:14:55 by haoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_base(char *str)
{
	int i;
	int j;

	i = 0;
	if (ft_strlen(str) == 0 || ft_strlen(str) == 1)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		if (str[i] == '+' || str[i] == '-')
			return (0);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[j] == str[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int b;

	if (!ft_base(base))
		return ;
	b = ft_strlen(base);
	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		ft_putnbr_base(-(long)nbr / b, base);
		ft_putnbr_base(-(long)nbr % b, base);
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putnbr_base(-nbr, base);
	}
	else if (nbr < b)
		write(1, &base[nbr], 1);
	else
	{
		ft_putnbr_base(nbr / b, base);
		ft_putnbr_base(nbr % b, base);
	}
}

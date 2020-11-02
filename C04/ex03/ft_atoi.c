/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haoh <haoh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 14:13:51 by haoh              #+#    #+#             */
/*   Updated: 2020/10/31 21:00:56 by haoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int a;
	int b;
	int c;

	a = 1;
	b = 0;
	c = 0;
	while (str[c] == '\f' || str[c] == '\n' || str[c] == '\t'
	|| str[c] == '\v' || str[c] == ' ' || str[c] == '\r')
		++c;
	while (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
			a *= -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		b *= 10;
		b += (a * (str[c] - '0'));
		c++;
	}
	return (b);
}
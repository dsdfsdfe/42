/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haoh <haoh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 19:07:01 by haoh              #+#    #+#             */
/*   Updated: 2020/11/04 22:13:11 by haoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	long long i;
	long long half;

	i = 5;
	half = nb / 2;
	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if ((nb % 2) == 0 || (nb % 3) == 0)
		return (0);
	while (i < half)
	{
		if ((nb % i) == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int n;

	n = nb;
	if (n <= 0)
		return (2);
	while (!ft_is_prime(n))
		n++;
	return (n);
}

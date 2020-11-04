/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haoh <haoh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 19:02:11 by haoh              #+#    #+#             */
/*   Updated: 2020/11/04 15:52:15 by haoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int	i;
	int	j;

	i = power;
	j = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i > 1)
	{
		j *= nb;
		i--;
	}
	return (j);
}

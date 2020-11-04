/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haoh <haoh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 19:02:44 by haoh              #+#    #+#             */
/*   Updated: 2020/11/02 20:25:43 by haoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	long int i;

	i = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i * i < nb)
		i++;
	if ((i * i) == nb)
		return (i);
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haoh <haoh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 20:29:29 by haoh              #+#    #+#             */
/*   Updated: 2020/10/29 04:38:04 by haoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	if (size = 0)
		return (src);
	while (src[i] && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (src);
}

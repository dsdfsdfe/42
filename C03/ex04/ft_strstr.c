/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haoh <haoh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 01:53:34 by haoh              #+#    #+#             */
/*   Updated: 2020/10/31 19:18:46 by haoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (to_find[j] != '\0')
		return (str);
	while (str[i] !='\0')
	{
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
			++j;
		if (to_find[j] == '\0')
			return (&str[i]);
		++i;
	}
	return (0);
}

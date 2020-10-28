/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_col.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkikim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 16:42:03 by minkikim          #+#    #+#             */
/*   Updated: 2020/10/25 22:38:39 by minkikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		r_col_box(int **arr, int y, int *a)
{
	int index;
	int arr_max;
	int count_box;

	index = 4;
	arr_max = -1;
	count_box = 0;
	while (index > 0)
	{
		if (arr_max < arr[index - 1][y])
		{
			arr_max = arr[index - 1][y];
			count_box++;
		}
		index--;
	}
	return (count_box == a[4 + y]);
}

int		col_dupl(int **arr, int y)
{
	int index;
	int jndex;

	index = 0;
	while (index < 4)
	{
		jndex = index + 1;
		while (jndex < 4)
		{
			if (arr[index][y] == arr[jndex][y])
			{
				return (1);
			}
			jndex++;
		}
		index++;
	}
	return (0);
}

int		col_box(int **arr, int y, int *a)
{
	int index;
	int arr_max;
	int count_box;

	index = 0;
	arr_max = -1;
	count_box = 0;
	if (col_dupl(arr, y))
	{
		return (0);
	}
	while (index < 4)
	{
		if (arr_max < arr[index][y])
		{
			arr_max = arr[index][y];
			count_box++;
		}
		index++;
	}
	return (count_box == a[y]);
}

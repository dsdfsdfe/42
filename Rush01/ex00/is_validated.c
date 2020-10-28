/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_validated.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkikim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 16:42:03 by minkikim          #+#    #+#             */
/*   Updated: 2020/10/25 22:48:32 by minkikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		col_box(int **arr, int y, int *a);
int		r_col_box(int **arr, int y, int *a);

int		raw_box(int **arr, int x, int *a)
{
	int index;
	int arr_max;
	int count_box;

	index = 0;
	arr_max = -1;
	count_box = 0;
	while (index < 4)
	{
		if (arr_max < arr[x][index])
		{
			arr_max = arr[x][index];
			count_box++;
		}
		index++;
	}
	return (count_box == a[8 + x]);
}

int		r_raw_box(int **arr, int x, int *a)
{
	int index;
	int arr_max;
	int count_box;

	index = 4;
	arr_max = -1;
	count_box = 0;
	while (index > 0)
	{
		if (arr_max < arr[x][index - 1])
		{
			arr_max = arr[x][index - 1];
			count_box++;
		}
		index--;
	}
	return (count_box == a[12 + x]);
}

int		is_validated(int **arr, int *a)
{
	int x;
	int y;

	x = 0;
	while (x < 4)
	{
		if (!raw_box(arr, x, a) || !r_raw_box(arr, x, a))
		{
			return (0);
		}
		y = 0;
		while (y < 4)
		{
			if (!col_box(arr, y, a) || !r_col_box(arr, y, a))
			{
				return (0);
			}
			y++;
		}
		x++;
	}
	return (1);
}

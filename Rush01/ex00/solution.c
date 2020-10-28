/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkikim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 17:54:12 by minkikim          #+#    #+#             */
/*   Updated: 2020/10/25 22:47:21 by minkikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		is_validated(int **arr, int *a);

int		find_dupl(int *row, int size, int index)
{
	int jndex;

	while (index < size)
	{
		jndex = index + 1;
		while (jndex < size)
		{
			if (row[index] == row[jndex])
			{
				return (0);
			}
			jndex++;
		}
		index++;
	}
	return (1);
}

int		write_arr_row(int *row, int size, int rn)
{
	int index;
	int power;

	index = 0;
	power = 1;
	while (index < size)
	{
		row[size - 1 - index] = (rn / power) % size + 1;
		power *= size;
		index++;
	}
	return (find_dupl(row, size, 0));
}

int		search_nbr(int **arr, int *a, int case_n, int row)
{
	int rn;

	if (row >= 4)
	{
		return (is_validated(arr, a));
	}
	rn = 0;
	while (rn < case_n)
	{
		if (write_arr_row(arr[row], 4, rn))
		{
			if (search_nbr(arr, a, case_n, row + 1))
			{
				return (1);
			}
		}
		rn++;
	}
	return (0);
}

int		solution(int **arr, int size, int *a)
{
	int case_n;

	case_n = size * size * size * size;
	return (search_nbr(arr, a, case_n, 0));
}

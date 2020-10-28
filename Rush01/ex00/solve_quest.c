/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_quest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkikim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 22:49:27 by minkikim          #+#    #+#             */
/*   Updated: 2020/10/25 23:08:01 by minkikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_validated(int **arr, int x, int y, int *a);
int		solution(int **arr, int size, int *a);
void	print_arr(int **arr);

int		**create_arr(int size)
{
	int	index;
	int	jndex;
	int	**arr;

	arr = (int **)malloc((size + 1) * sizeof(int *));
	index = 0;
	while (index < size)
	{
		arr[index] = (int *)malloc((size + 1) * sizeof(int));
		jndex = 0;
		while (jndex < size + 1)
		{
			arr[index][jndex] = 0;
			jndex++;
		}
		index++;
	}
	arr[size] = 0;
	return (arr);
}

int		solve_quest(int *arr)
{
	int **arry;

	arry = create_arr(4);
	if (solution(arry, 4, arr))
	{
		print_arr(arry);
	}
	return (0);
}

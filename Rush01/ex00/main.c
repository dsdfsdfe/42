/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwchoi <jiwchoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 16:09:58 by jiwchoi           #+#    #+#             */
/*   Updated: 2020/10/25 23:02:12 by minkikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	solve_quest(int *arr);

void	print_arr(int **arr)
{
	int		x;
	int		y;
	char	ch;

	x = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			ch = arr[x][y] + '0';
			write(1, &ch, 1);
			write(1, " ", 1);
			y++;
		}
		write(1, "\n", 1);
		x++;
	}
}

int		main(int argc, char *argv[])
{
	int i;
	int n_count;
	int arr[16];

	i = 0;
	n_count = 0;
	while (argc == 2 && (argv[1][i] != '\0' || n_count < 16))
	{
		if (argv[1][i] >= '1' && argv[1][i] <= '4')
			arr[n_count++] = argv[1][i] - '0';
		else if (argv[1][i] != ' ')
		{
			write(1, "Error\n", 6);
			return (0);
		}
		i++;
	}
	if (argc != 2 || n_count != 16)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	solve_quest(arr);
	return (0);
}

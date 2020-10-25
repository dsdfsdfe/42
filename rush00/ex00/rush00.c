/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjakim <minjakim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 23:21:58 by minjakim          #+#    #+#             */
/*   Updated: 2020/10/18 23:26:53 by minjakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int g_inner_x;
int g_inner_y;

void	ft_putchar(char c);

void	print_column(char *materials, int x) 
{
	int column;
	
	column = 0;
	while (column < x)
	{
		if (column == 0)
			ft_putchar(materials[0]);
		else if (column == g_inner_x) 
			ft_putchar(materials[1]);
		else
			ft_putchar(materials[2]);
		++column;
	}
	ft_putchar('\n');
}

void	print_row(char *materials, int x, int y) 
{
	int row;

	row = 0;
	while (row < y) 
	{
		if (row == 0)
			print_column(materials, x);
 		else if (row == g_inner_y)
			print_column(&materials[3], x);
		else
			print_column(&materials[6], x);
		++row;
	}
}

void	rush(int x, int y)
{
	g_inner_x = x - 1;
	g_inner_y = y - 1;
	print_row("oo-oo-|| ", x, y); 
} 
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_box.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eokoshi <eokoshi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 07:54:32 by eokoshi           #+#    #+#             */
/*   Updated: 2023/08/19 07:55:58 by eokoshi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	g_size;

int	check_from_top(int **board, int *argv_col)
{
	int	col;
	int	row;
	int	visible_box_num;
	int	max_height;

	col = 0;
	while (col < g_size)
	{
		visible_box_num = 0;
		max_height = 0;
		row = 0;
		while (row < g_size)
		{
			if (board[row][col] > max_height)
			{
				max_height = board[row][col];
				visible_box_num++;
			}
			row++;
		}
		if (visible_box_num != argv_col[col])
			return (0);
		col++;
	}
	return (1);
}

int	check_from_bottom(int **board, int *argv_col)
{
	int	col;
	int	row;
	int	visible_box_num;
	int	max_height;

	col = 0;
	while (col < g_size)
	{
		visible_box_num = 0;
		max_height = 0;
		row = g_size - 1;
		while (row >= 0)
		{
			if (board[row][col] > max_height)
			{
				max_height = board[row][col];
				visible_box_num++;
			}
			row--;
		}
		if (visible_box_num != argv_col[col])
			return (0);
		col++;
	}
	return (1);
}

int	check_from_left(int **board, int *argv_row)
{
	int	col;
	int	row;
	int	visible_box_num;
	int	max_height;

	row = 0;
	while (row < g_size)
	{
		visible_box_num = 0;
		max_height = 0;
		col = 0;
		while (col < g_size)
		{
			if (board[row][col] > max_height)
			{
				max_height = board[row][col];
				visible_box_num++;
			}
			col++;
		}
		if (visible_box_num != argv_row[row])
			return (0);
		row++;
	}
	return (1);
}

int	check_from_right(int **board, int *argv_row)
{
	int	col;
	int	row;
	int	visible_box_num;
	int	max_height;

	row = 0;
	while (row < g_size)
	{
		visible_box_num = 0;
		max_height = 0;
		col = g_size - 1;
		while (col >= 0)
		{
			if (board[row][col] > max_height)
			{
				max_height = board[row][col];
				visible_box_num++;
			}
			col--;
		}
		if (visible_box_num != argv_row[row])
			return (0);
		row++;
	}
	return (1);
}

int	is_correct_box(int **board, int **argv)
{
	if (!check_from_top(board, argv[0]))
		return (0);
	if (!check_from_bottom(board, argv[1]))
		return (0);
	if (!check_from_left(board, argv[2]))
		return (0);
	if (!check_from_right(board, argv[3]))
		return (0);
	return (1);
}

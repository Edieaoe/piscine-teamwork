/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eokoshi <eokoshi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:08:28 by eokoshi           #+#    #+#             */
/*   Updated: 2023/08/19 19:51:12 by eokoshi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		g_size;
int		**parse_arguments(char *str);
int		is_correct_box(int **board, int **argv);
void	print_board(int **board);

int		solve_board(int **board, int row, int col, int **argv);
int		process_cell(int **board, int row, int col, int **argv);

int	is_duplicate(int **board, int row, int col, int num)
{
	int	c;
	int	r;

	c = 0;
	while (c < g_size)
	{
		if (board[row][c] == num && c != col)
		{
			return (1);
		}
		c++;
	}
	r = 0;
	while (r < g_size)
	{
		if (board[r][col] == num && r != row)
		{
			return (1);
		}
		r++;
	}
	return (0);
}

int	next_position(int row, int col, int *next_row, int *next_col)
{
	*next_row = row;
	*next_col = col + 1;
	if (*next_col == g_size)
	{
		(*next_row)++;
		*next_col = 0;
	}
	return (0);
}

int	is_finish(int **board, int **argv, int row)
{
	if (row == g_size)
	{
		if (is_correct_box(board, argv))
		{
			print_board(board);
			return (1);
		}
		return (0);
	}
	return (-1);
}

int	solve_board(int **board, int row, int col, int **argv)
{
	int	next_row;
	int	num;
	int	next_col;
	int	finish_flag;

	finish_flag = is_finish(board, argv, row);
	if (finish_flag != -1)
		return (finish_flag);
	next_position(row, col, &next_row, &next_col);
	if (board[row][col] != 0)
		return (solve_board(board, next_row, next_col, argv));
	num = 1;
	while (num <= g_size)
	{
		if (!is_duplicate(board, row, col, num))
		{
			board[row][col] = num;
			if (solve_board(board, next_row, next_col, argv))
				return (1);
			board[row][col] = 0;
		}
		num++;
	}
	return (0);
}

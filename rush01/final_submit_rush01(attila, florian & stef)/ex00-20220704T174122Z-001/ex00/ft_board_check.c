/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_board_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akekesi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 15:55:18 by akekesi           #+#    #+#             */
/*   Updated: 2022/07/03 17:00:46 by akekesi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_board_check_loop(char **board, int pos, int n, char c);
int	ft_board_check(char **board, int row, int col, int n);
int	ft_board_check_double_row(char **board, int row, int col);
int	ft_board_check_double_col(char **board, int row, int col);
int	ft_board_check_step_row(char **board, int row, int col, int n);
int	ft_board_check_step_col(char **board, int row, int col, int n);
int	ft_board_check_step_row_back(char **board, int row, int n);
int	ft_board_check_step_col_back(char **board, int col, int n);

int	ft_board_check_loop(char **board, int pos, int n, char c)
{
	int		check;
	int		row;
	int		col;
	char	c_check;

	check = 0;
	c_check = c;
	row = pos / (n + 2);
	col = pos % (n + 2);
	while (!check)
	{
		if (c_check > n + '0')
		{
			board[row][col] = 'X';
			return (0);
		}
		board[row][col] = c_check;
		check = ft_board_check(board, row, col, n);
		c_check++;
	}
	return (1);
}

int	ft_board_check(char **board, int row, int col, int n)
{
	int	check;

	check = ft_board_check_double_row(board, row, col);
	check *= ft_board_check_double_col(board, row, col);
	check *= ft_board_check_step_row(board, row, col, n);
	check *= ft_board_check_step_col(board, row, col, n);
	if (col == n)
		check *= ft_board_check_step_row_back(board, row, n);
	if (row == n)
		check *= ft_board_check_step_col_back(board, col, n);
	return (check);
}

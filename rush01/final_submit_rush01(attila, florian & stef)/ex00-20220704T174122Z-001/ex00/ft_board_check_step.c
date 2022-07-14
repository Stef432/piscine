/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_board_check_step.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akekesi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:05:10 by akekesi           #+#    #+#             */
/*   Updated: 2022/07/03 16:07:11 by akekesi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_board_check_step_row(char **board, int row, int col, int n)
{
	int	i;
	int	pos;
	int	step;

	i = 2;
	pos = 1;
	step = '1';
	while (i <= col)
	{
		if (board[row][pos] < board[row][i])
		{
			pos = i;
			step++;
		}
		i++;
	}
	if (col == n && step == board[row][0])
		return (1);
	if (col < n && step <= board[row][0])
		return (1);
	return (0);
}

int	ft_board_check_step_col(char **board, int row, int col, int n)
{
	int	i;
	int	pos;
	int	step;

	i = 2;
	pos = 1;
	step = '1';
	while (i <= row)
	{
		if (board[pos][col] < board[i][col])
		{
			pos = i;
			step++;
		}
		i++;
	}
	if (row == n && step == board[0][col])
		return (1);
	if (row < n && step <= board[0][col])
		return (1);
	return (0);
}

int	ft_board_check_step_row_back(char **board, int row, int n)
{
	int	i;
	int	pos;
	int	step;

	i = n - 1;
	pos = n;
	step = '1';
	while (1 <= i)
	{
		if (board[row][i] > board[row][pos])
		{
			pos = i;
			step++;
		}
		i--;
	}
	if (step == board[row][n + 1])
		return (1);
	return (0);
}

int	ft_board_check_step_col_back(char **board, int col, int n)
{
	int	i;
	int	pos;
	int	step;

	i = n - 1;
	pos = n;
	step = '1';
	while (1 <= i)
	{
		if (board[i][col] > board[pos][col])
		{
			pos = i;
			step++;
		}
		i--;
	}
	if (step == board[n + 1][col])
		return (1);
	return (0);
}

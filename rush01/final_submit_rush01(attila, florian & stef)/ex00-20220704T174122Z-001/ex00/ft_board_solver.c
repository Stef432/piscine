/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_board_solver.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akekesi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 15:30:15 by akekesi           #+#    #+#             */
/*   Updated: 2022/07/04 17:34:30 by akekesi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_board_solver_recursive(char **board, int n, int row, int col);
int		ft_board_check_loop(char **board, int pos, int n, char c);
void	ft_board_pos(int *row, int *col, int n);

int	ft_board_solver_recursive(char **board, int n, int row, int col)
{
	int		result;
	int		check;
	int		pos;
	int		n2;
	char	c;

	if (row <= n && col <= n)
	{
		result = 0;
		c = '1';
		n2 = n + 2;
		while (!result)
		{
			pos = row * (n + 2) + col;
			check = ft_board_check_loop(board, pos, n, c);
			if (!check)
				return (0);
			c = board[row][col] + 1;
			pos++;
			if (col == n)
				pos = pos + 2;
			result = ft_board_solver_recursive(board, n, pos / n2, pos % n2);
		}
	}
	return (1);
}

void	ft_board_pos(int *row, int *col, int n)
{
	int	pos;

	pos = *row * (n + 2) + *col;
	pos++;
	if (*col == n)
		pos = pos + 2;
	*row = pos / (n + 2);
	*col = pos % (n + 2);
}

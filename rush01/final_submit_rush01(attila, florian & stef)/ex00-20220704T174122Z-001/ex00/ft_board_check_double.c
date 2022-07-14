/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_board_check_double.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akekesi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:05:10 by akekesi           #+#    #+#             */
/*   Updated: 2022/07/03 16:06:48 by akekesi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_board_check_double_row(char **board, int row, int col)
{
	int	i_row1;
	int	i_row2;

	i_row1 = 1;
	while (i_row1 < row)
	{
		i_row2 = i_row1 + 1;
		while (i_row2 <= row)
		{
			if (board[i_row1][col] == board[i_row2][col])
				return (0);
			i_row2++;
		}
		i_row1++;
	}
	return (1);
}

int	ft_board_check_double_col(char **board, int row, int col)
{
	int	i_col1;
	int	i_col2;

	i_col1 = 1;
	while (i_col1 < col)
	{
		i_col2 = i_col1 + 1;
		while (i_col2 <= col)
		{
			if (board[row][i_col1] == board[row][i_col2])
				return (0);
			i_col2++;
		}
		i_col1++;
	}
	return (1);
}

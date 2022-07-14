/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_board_frame.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akekesi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 14:47:20 by akekesi           #+#    #+#             */
/*   Updated: 2022/07/03 15:16:32 by akekesi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	ft_board_frame_if(char *str, int row, int col, int n);

char	**ft_board_frame(char *str, int n)
{
	int		i_row;
	int		i_col;
	int		i;
	char	**board;

	board = (char **) malloc(sizeof(char *) * n);
	i = 0;
	while (i < n)
	{
		board[i] = (char *) malloc(sizeof(char) * n);
		i++;
	}
	i_row = 0;
	while (i_row < n)
	{
		i_col = 0;
		while (i_col < n)
		{
			board[i_row][i_col] = ft_board_frame_if(str, i_row, i_col, n);
			i_col++;
		}
		i_row++;
	}
	return (board);
}

char	ft_board_frame_if(char *str, int row, int col, int n)
{
	char	c_write;

	if ((row == 0 || row == n - 1) && (col == 0 || col == n - 1))
		c_write = '*';
	else if (row == 0)
		c_write = str[(col - 1) * 2];
	else if (row == n - 1)
		c_write = str[2 * (n - 2) + (col - 1) * 2];
	else if (col == 0)
		c_write = str[2 * 2 * (n - 2) + (row - 1) * 2];
	else if (col == n - 1)
		c_write = str[3 * 2 * (n - 2) + (row - 1) * 2];
	else
		c_write = 'X';
	return (c_write);
}

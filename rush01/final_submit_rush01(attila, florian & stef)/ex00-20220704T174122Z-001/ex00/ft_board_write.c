/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_board_write.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akekesi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 17:04:20 by akekesi           #+#    #+#             */
/*   Updated: 2022/07/03 17:20:30 by akekesi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_board_write(char **board, int n, int small)
{
	int	i_row;
	int	i_col;

	i_row = 0 + small;
	while (i_row < n - small)
	{
		i_col = 0 + small;
		while (i_col < n - small)
		{
			write(1, &board[i_row][i_col], 1);
			i_col++;
			if (i_col < n - small)
			{
				write(1, " ", 1);
			}
			else
			{
				write(1, "\n", 1);
			}
		}
		i_row++;
	}
}

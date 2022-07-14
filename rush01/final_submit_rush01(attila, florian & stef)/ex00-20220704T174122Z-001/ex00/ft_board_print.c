/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_board_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akekesi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 14:48:06 by akekesi           #+#    #+#             */
/*   Updated: 2022/07/04 17:22:24 by akekesi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_board_print(char **board, int n, int small)
{
	int	i_row;
	int	i_col;

	i_row = 0 + small;
	while (i_row < n - small)
	{
		i_col = 0 + small;
		while (i_col < n - small)
		{
			printf("%c", board[i_row][i_col]);
			i_col++;
			if (i_col < n - small)
			{
				printf(" ");
			}
			else
			{
				printf("\n");
			}
		}
		i_row++;
	}
}

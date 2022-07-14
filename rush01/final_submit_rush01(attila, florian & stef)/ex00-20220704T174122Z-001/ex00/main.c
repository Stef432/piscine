/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akekesi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 14:22:34 by akekesi           #+#    #+#             */
/*   Updated: 2022/07/03 22:59:20 by akekesi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_board_check_input(char *str);
int		ft_length_str(char *str);
int		ft_board_solver_recursive(char **board, int n, int row, int col);
char	**ft_board_frame(char *str, int n);
void	ft_board_write(char **board, int n, int small);

int	main(int argc, char **argv)
{
	char	**board;
	int		n;
	int		check;

	if (argc == 2)
	{
		check = ft_board_check_input(argv[1]);
		if (!check)
		{
			write(1, "Error\n", 6);
			return (0);
		}
		n = (ft_length_str(argv[1]) + 1) / 2 / 4 + 2;
		board = ft_board_frame(argv[1], n);
		check = ft_board_solver_recursive(board, n - 2, 1, 1);
		if (!check)
		{
			write(1, "Error\n", 6);
			return (0);
		}
		ft_board_write(board, n, 1);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}

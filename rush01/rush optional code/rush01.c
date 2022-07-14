/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 20:40:33 by smunari           #+#    #+#             */
/*   Updated: 2022/07/03 20:47:52 by smunari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	check_valid(char *c);
void	fill(char grid[4][4], char conditions[4][4], char *s);
char	check_view(char grid[4][4], char condition[4][4]);

void	pc(char c)
{
	write(1, &c, 1);
}

void	print_str(char *c)
{
	while (*c != '\0')
	{
		write(1, c, 1);
		c ++;
	}	
	return ;
}

void	print_4x4(char a[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			write(1, &a[i][j], 1);
			j ++;
		}
		i ++;
		j = 0;
		write(1, "\n", 1);
	}
	return ;
}

int	main(int argc, char *argv[]) //it is an grid array (list) of char* or addresses
{
	char	grid[4][4];
	char	conditions[4][4];

	if (argc != 2)
	{
		print_str("Error\n");
		return (0);
	}
	if (check_valid(argv[1]) == 'N')
	{
		print_str("Error\n");
		return (0);
	}
	fill(grid, conditions, argv[1]);
	print_4x4(grid);
	print_4x4(conditions);
	pc(check_view(grid, conditions));
	return (0);
}

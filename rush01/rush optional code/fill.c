/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 17:23:48 by smunari           #+#    #+#             */
/*   Updated: 2022/07/03 17:23:50 by smunari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	fill_grid_zeros(char grid[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			grid[i][j] = '0';
			j ++;
		}
		i ++;
		j = 0;
	}
	return ;
}

void	fill_conditions(char conditions[4][4], char *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			conditions[i][j] = s[2 * j + 8 * i];
			j ++;
		}
		i ++;
		j = 0;
	}
	return ;
}

void	fill(char grid[4][4], char conditions[4][4], char *s)
{
	fill_grid_zeros(grid);
	fill_conditions(conditions, s);
	return ;
}
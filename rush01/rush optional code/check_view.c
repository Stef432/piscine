/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_view.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 20:52:37 by smunari           #+#    #+#             */
/*   Updated: 2022/07/03 20:52:39 by smunari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	check_up(char grid[4][4], char condition[4][4]);
char	check_down(char grid[4][4], char condition[4][4]);
char	check_left(char grid[4][4], char condition[4][4]);
char	check_right(char grid[4][4], char condition[4][4]);

char	check_view(char grid[4][4], char condition[4][4])
{
	char ru;
	char rd;
	char rl;
	char rr;

	ru = check_up(grid, condition);
	rd = check_down(grid, condition);
	rl = check_left(grid, condition);
	rr = check_right(grid, condition);

	if (ru == 'Y' && rd == 'Y' && rl == 'Y' && rr == 'Y')
		return 'Y';
	else
		return 'N';
}
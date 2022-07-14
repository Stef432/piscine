/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_view_up_down_left_right.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 20:52:37 by smunari           #+#    #+#             */
/*   Updated: 2022/07/03 20:52:39 by smunari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	check_list(char con, char list[4])
{
	char	highest_seen;
	char	amount_seen;
	int		count;

	highest_seen = '0';
	count = 0;
	amount_seen = '0';
	while (count < 4)
	{
		if (list[count] == '0')
			return ('Y');
		if (list[count] > highest_seen)
		{
			amount_seen ++;
			highest_seen = list[count];
		}
		if (amount_seen > con)
			return ('N');
		count ++;
	}
	if (amount_seen == con)
		return ('Y');
	else
		return ('N');
}

char	check_up(char grid[4][4], char condition[4][4])
{
	int		count;
	char	result;
	char	con;
	char	list[4];
	
	count = 0;
	result = 'Y';
	while(count < 4)
	{
		con = condition[0][count];
		list[0] = grid[0][count];
		list[1] = grid[1][count];
		list[2] = grid[2][count];
		list[3] = grid[3][count];
		if (check_list(con, list) == 'N')
			result = 'N';
		count ++;
	}
	return (result);
}

char	check_down(char grid[4][4], char condition[4][4])
{
	int		count;
	char	result;
	char	con;
	char	list[4];
	
	count = 0;
	result = 'Y';
	while(count < 4)
	{
		con = condition[1][count];
		list[0] = grid[4][count];
		list[1] = grid[3][count];
		list[2] = grid[2][count];
		list[3] = grid[1][count];
		if (check_list(con, list) == 'N')
			result = 'N';
		count ++;
	}
	return (result);
}

char	check_left(char grid[4][4], char condition[4][4])
{
	int		count;
	char	result;
	char	con;
	char	list[4];
	
	count = 0;
	result = 'Y';
	while(count < 4)
	{
		con = condition[3][count];
		list[0] = grid[count][0];
		list[1] = grid[count][1];
		list[2] = grid[count][2];
		list[3] = grid[count][3];
		if (check_list(con, list) == 'N')
			result = 'N';
		count ++;
	}
	return (result);
}

char	check_right(char grid[4][4], char condition[4][4])
{
	int		count;
	char	result;
	char	con;
	char	list[4];
	
	count = 0;
	result = 'Y';
	while(count < 4)
	{
		con = condition[4][count];
		list[0] = grid[count][3];
		list[1] = grid[count][2];
		list[2] = grid[count][1];
		list[3] = grid[count][0];
		if (check_list(con, list) == 'N')
			result = 'N';
		count ++;
	}
	return (result);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_double.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 21:11:09 by smunari           #+#    #+#             */
/*   Updated: 2022/07/03 21:11:12 by smunari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	check_double_list(char list[4])
{
	int amount[4];
	int count;

	amount[0] = 0;
	amount[1] = 0;
	amount[2] = 0;
	amount[3] = 0;
	count = 0;

	while (count < 4)
	{
		if (list[count] != '0')
			amount[list[count] - 49] ++;
	}
	if(amount[0] >= 2 || amount[1] >= 2 || amount[2] >= 2 || amount[3] >= 2)
		return 'N'
	return 'Y';
}

char	check_double(char grid[4][4], char condition[4][4])
{
	int	i;

	i = 0;
	while (i < 3)
	{
		check_double_list()
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_board_check_input.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akekesi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 17:34:13 by akekesi           #+#    #+#             */
/*   Updated: 2022/07/04 17:26:09 by akekesi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_length_str(char *str);

int	ft_board_check_input(char *str)
{
	int	i;
	int	n;
	int	length;
	int	counter;

	length = ft_length_str(str);
	n = (length + 1) / 2 / 4;
	i = 0;
	counter = 0;
	while (i < length)
	{
		if ('1' <= str[i] && str[i] <= n + '0')
		{
			counter++;
		}
		else
			return (0);
		if (i + 1 < length && str[i + 1] != ' ')
			return (0);
		i += 2;
	}
	if (n * 4 != counter || n == 0)
		return (0);
	else
		return (1);
}

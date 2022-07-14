/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 10:07:46 by smunari           #+#    #+#             */
/*   Updated: 2022/06/29 10:33:06 by smunari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char x = 'z';
	while(x >= 'a')
	{
		write(1, &x, 1);
		x--;
	}
}

int	main()
{
	char	x;

	x = 'z';
	ft_print_reverse_alphabet();
	return 0;
}

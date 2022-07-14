/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 16:24:04 by smunari           #+#    #+#             */
/*   Updated: 2022/07/02 16:54:21 by smunari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

int	main(void)
{
	char	*ptr;
	ptr = "toto";

	ft_putchar(ptr[0]);
	ft_putchar('\n');
	return(0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rite_function_putchar.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 10:54:39 by smunari           #+#    #+#             */
/*   Updated: 2022/07/02 15:53:46 by smunari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
*/
char	salad(char a)
{
	write(1, &a, 1);

	return('5');
}

char	next_one(char i)
{
	i = i + 1;
	write(1, &i, 1);
	return(0);
}

char	return_prev_num(char p)
{
	p = p - 1;
	return(p);
	//receives a char and it gives back the prev char
	
}
/*
int	main()
{
	char	b;
	char	c;

	b = 67;
	c = '8';
	
	c = return_prev_num(c);

	while(c <= 77)
	{
		write(1, &c, 1);
		c++;
	}

	
	/*
	b = salad('N'); //b has the value of the return - write 'N'
	write(1, &b, 1);//"visibility line"
	salad(b); // return of salad.
*/
	return(8);
}

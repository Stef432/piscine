/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunari <smunari@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:37:23 by smunari           #+#    #+#             */
/*   Updated: 2022/07/12 15:03:38 by smunari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while(s1[i])
	{
		if(s1[i] != s2[i])
			return(s1[i] - s2[i]);
		i++;
	}
	return(0);
}
/*
int	main(void)
{
	int		result;
	char	*s1;
	char	*s2;

	s1 = "stefania";
	s2 = "stefar6tfgvgkhbjjipgnia";

	result = strcmp(s1, s2);
	printf("%i\n", result);
	printf("%i\n", ft_strcmp(s1, s2));
	return(0);
}
*/

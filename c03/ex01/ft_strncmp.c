/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunari <smunari@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:06:22 by smunari           #+#    #+#             */
/*   Updated: 2022/07/12 19:00:45 by smunari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while(s1[i] != '\0' && i < n)
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
	char	s1[] = "ya uelvouvhekcmd"; 
	char	s2[] = "ya vuelvo";
	
	result = strncmp(s1, s2, 5);
	printf("%i\n", result);
	printf("%i\n", ft_strncmp(s1, s2, 5));
	return(0);
}
*/

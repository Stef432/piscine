/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunari <smunari@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 11:31:05 by smunari           #+#    #+#             */
/*   Updated: 2022/07/14 11:59:55 by smunari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int		i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	if (dest[i] == '\0' )
		dest[i] = src[i];
		src[i] = '\0';
		i++;
	return(dest);
}

int	main(void)
{
	char	desti[] = "hola, como te va?";
	char	sourcy[] = "1234567";

	printf("%s\n", ft_strcat(desti, sourcy));
	printf("%s\n", strcat(desti, sourcy));
	return(0);
}

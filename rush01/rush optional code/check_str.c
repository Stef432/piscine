/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   check_str.c                                        :+:      :+:    :+:   */
/*													+:+ +:+		 +:+	 */
/*   By: smunari <marvin@42.fr>					 +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2022/07/03 16:07:58 by smunari		   #+#	#+#			 */
/*   Updated: 2022/07/03 17:19:00 by smunari          ###   ########.fr       */
/*																			*/
/* ************************************************************************** */

int     str_counter(char *b)
{
	int    a;

	a = 0;
	while (b[a] != '\0')
        {
        	a++;
	}
	return (a);
}

char	check_valid(char *c)
{
	int	 len;
	int	 ct;

	len = str_counter(c);
	ct = 0;
	if(len != 31)
	{
		return ('N');
	}
	while (ct < 31)
	{
		if (ct % 2 == 0)
		{
			if (c[ct] <= '0' || c[ct] >= '5')
			return ('N');
		}
		else
		{
		      if (c[ct] != ' ')
		      return ('N');
		}
		ct ++;
	}
	return ('Y');
}

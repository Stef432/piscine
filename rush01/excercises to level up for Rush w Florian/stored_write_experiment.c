#include <unistd.h>

/*void	print_str(char *c)
{
	write(1, c++, 1);//first write, then add 1
	
	write(1, c++, 1);

	write(1, c, 1);
	
	return;
}
*/
void	print_string(char *c)	
{
	while (*c != '\0')
	{
	//	write(1, c++, 1);
		if(*c % 2 == 0)
		{
			write(1, c, 1);
		}
		c++;
	}
	
	return;
}

int	main()
{
	char a[6];
	a[0] = 49;
	a[1] = 50;
	a[2] = 51;
	a[3] = 52;
	a[4] = 53;
	a[5] = '\0';
	
	print_string(a);

	return(0);
}

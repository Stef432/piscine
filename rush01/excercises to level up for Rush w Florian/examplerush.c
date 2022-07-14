#include	<unistd.h>

int	main(int argc, char *argv[])
{
	char	c;

	c = 'a';
	c = c + argc;
	write(1, &c, 1);
	return(0);
}

# include <stdio.h>

int powers(int number, int exponent);

int 
main (int argc, char *argv[])
{
	printf("2^8 is: %d\n", powers(2, 8));

	return 0;
}

int 
powers (int number, int exponent)
{
	if (exponent == 0)
		return 1;

	if (exponent == 1)
		return number;
	else
		return number * powers(number, exponent-1);
}

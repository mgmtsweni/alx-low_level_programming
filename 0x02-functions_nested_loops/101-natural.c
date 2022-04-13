#include "stdio.h"
/**
* main - Entry point
* Description: prints the sum of all the multiples of 3 or 5
* Return: Always 0.
*/
int main(void)
{
	int a, b, s, x, y;

	s = 0;
	for (a = 0; a <= (1024  / 3); a++)
	{
		y = a * 3;
		s = s + y;
	}
	for (b = 0; b < (1024 / 5); b++)
	{
		if (!(b % 3 == 0))
		{
			x = b * 5;
			s = s + x;
		}
	}
	printf("%i\n", s);
	return (0);
}

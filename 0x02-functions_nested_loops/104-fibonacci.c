#include <stdio.h>
/**
* main - entry point
* Description: first 98 fibonacci numbers starting with 1 & 2
* Return: 0 on success
*/
int	main(void)
{
	long int i, x = 1, y = 2, sum = 0;

	i = 0;
	while (i < 97)
	{
		printf("%lu, ", x);
		sum = x + y;
		x = y;
		y = sum;
		if (i == 96)
			printf("%lu\n", x);
	i++;
	}
			return (0);
}

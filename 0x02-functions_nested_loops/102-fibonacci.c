#include <stdio.h>
/**
* main - entry point
* Description: first 50 fibonacci numbers
* Return: 0 on success
*/
int	main(void)
{
	unsigned long count, i, a, b;

	i = 0;
	a = 1;
	count = 0;
	while (count < 50)
	{
		b = i + a;
		i = a;
		a = b;
		printf("%lu", b);
		if (count == 49)
			putchar('\n');
		else
		{
			printf(", ");
		}
		count++;
	}
	return (0);
}

#include "main.h"
/**
* main - entry point
* Description: prints the n times table
* Return: 0 on success
*/
void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
	{
		i = 0;
		while(i <= n)
		{
			_putchar('0');
			if (n != 0)
				_putchar(',');
			j = 1;
			while(j <= n)
			{
				k = i * j;
				if (k < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + k);
				}
				else if (k < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar((k / 100) + '0');
					_putchar(((k % 100) / 10) + '0');
					_putchar(((k % 100) % 10) + '0');
				}
				if (j < n)
				_putchar(',');
			j++;
			}
		_puutchar('\n');
		i++;
		}
	}
}

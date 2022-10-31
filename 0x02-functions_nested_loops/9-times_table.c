#include "main.h"
/**
* times_table - Entry point
* Description: print the last digit
* Return: Always 0
*/
void times_table(void)
{
	int row, coll, d;

	row = 0;
	while (row <= 9)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		coll = 1;
		while (coll <= 9)
		{
			d = (row * coll);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');
			if (coll < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			coll++;
		}
		row++;
		_putchar('\n');
	}
}

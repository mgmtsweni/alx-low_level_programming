#include "main.h"
/**
* print_sign - Entry point
* Description: check number sign
* Return: Always 0 or 1
* @n: holds the character under evaluation1
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

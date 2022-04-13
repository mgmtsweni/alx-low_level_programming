#include "main.h"
/**
* print_last_digit - Entry point
* Description: print the last digit
* Return: Always 0.
* @x: holds the character under evaluation1
*/
int print_last_digit(int x)
{
	int i;
	int num;

	num = x % 10;
	if (num < 0)
	num = -num;
	i = '0' + num;
	_putchar(i);
	return (num);
}

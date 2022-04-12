#include "main.h"
/**
* Description: prints the alphabets
* Return: 0 on success
*/
void print_alphabet(void)
{
	char a;
	
	a = 'a';
	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}

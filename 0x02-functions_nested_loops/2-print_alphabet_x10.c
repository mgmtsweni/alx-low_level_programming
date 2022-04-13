#include "main.h"
/**
* print_alphabet- print alphabet 10 times in lowercase
* Discription - void: no arguments
* Return: 0 on success
*/
void print_alphabet_x10(void)
{
	char a;
	int i;

	i = 0;
	while (i < 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}

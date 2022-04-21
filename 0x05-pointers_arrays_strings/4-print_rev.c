#include <main.h>
/**
* print_rev - prints string in reverse
* @s: input string
* Return: no return
*/
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	i++;
	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}

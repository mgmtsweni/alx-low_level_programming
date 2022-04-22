#include "main.h"
/**
 * puts2 - prints one char out of 2
 * @str: type
 */
void puts2(char *str)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (str[i] != '\0')
		i++;

	while (j < i)
	{
		_putchar(str[j]);
		j = j + 2;
	}
	_putchar('\n');
}

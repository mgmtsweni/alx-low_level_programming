#include "main.h"
/**
* main - prints to string
* Description: Prints positive, negative or zero
* Return: 0
*/
int	main(void)
{
	char c[] = "_putchar";
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}

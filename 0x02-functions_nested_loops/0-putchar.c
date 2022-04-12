#include <unistd.h>
/**
* main - prints to string
* Description: Prints positive, negative or zero
* Return: 0
*/
void	_putchar(char c)
{
		return(write(1, &c, 1));
}

#include <main.h>
/**
* main - entry point
* Description: prints the alphabets
* Return: 0 on success
*/
int main(void)
{
	char a;
	
	a = 'a';
	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
	return (0);
}

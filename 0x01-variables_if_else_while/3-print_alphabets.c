#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - entry point
* Description: random number in n +ve/-ve
* Return: 0 on success
*/
int main(void)
{
	char lower;
	char Upper;

	lower = 'a';
	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	Upper = 'A';
	while (Upper <= 'Z')
	{
		putchar(Upper);
		Upper++;
	}
	putchar ('\n');
	return (0);
}

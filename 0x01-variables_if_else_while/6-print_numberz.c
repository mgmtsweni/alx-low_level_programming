#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - entry point
* Description:  prints all single digit numbers of base 10 starting from 0
* Return: 0 on success
*/
int main(void)
{
	int c;

	c = 0;
	while (c < 10)
	{
		putchar(48 + c);
		c++;
	}
	putchar('\n');
	return (0);
}

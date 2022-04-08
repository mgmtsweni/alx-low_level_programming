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
	char c;
	int i;

	i = 0;
	while (i < 10)
	{
		putchar(48 + i);
		i++;
	}
	c = 'a';
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

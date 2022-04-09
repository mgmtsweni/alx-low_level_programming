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
	int doubles;
	int singles;

	doubles = 0;
	while (doubles <= 9)
	{
		singles = doubles;
		while (singles <= 9)
		{
			putchar(doubles + '0');
			putchar(singles + '0');
			if (doubles < 8)
			{
				putchar(',');
				putchar(' ');
			}
			singles++;
		}
		doubles++;
	}
	putchar('\n');
	return (0);
}

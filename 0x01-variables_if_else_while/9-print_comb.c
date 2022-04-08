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
	int num;

	num = 0;
	while (num <= 9)
	{
		putchar(48 + num);
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}

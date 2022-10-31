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

	num =  0;
	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}
